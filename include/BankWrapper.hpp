#ifndef BEARATM_BANKWRAPPER_H
#define BEARATM_BANKWRAPPER_H

#include <cstdint>

#include "AtmStatus.hpp"
#include "Bank.hpp"

class BankWrapper {
 public:
  BankWrapper(Bank *bank);

  AtmStatus GetBalance(Account *account);
  AtmStatus Deposit(Account *account, uint64_t amount);
  AtmStatus Withdraw(Account *account, uint64_t amount);

 private:
  Bank *bank_;
};

#endif  // BEARATM_BANKRAPPER_H