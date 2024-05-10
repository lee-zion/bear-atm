#ifndef BEARATM_Bank_H
#define BEARATM_Bank_H

#include <cstdint>
#include <unordered_map>
#include <vector>
#include <string>

#include "Account.hpp"
#include "AtmStatus.hpp"

class Bank {
 public:
  Bank(uint64_t id_);
  int64_t GetBalance(Account *account);
  bool Deposit(Account *account, uint64_t amount);
  bool Withdraw(Account *account, uint64_t amount);
  bool AddAccount(Account *account);

 private:
  uint64_t id_;
  std::unordered_map<uint64_t, std::vector<Account>> accounts_;
};

#endif  // BEARATM_BANK_H