#ifndef BEARATM_ACCOUNT_H
#define BEARATM_ACCOUNT_H

#include <cstdint>
#include <vector>

#include "AtmStatus.hpp"

class Account {
 public:
   Account(uint64_t id, int64_t balance);
   int64_t getBalance();
   uint64_t GetAccountID();
   bool setBalance(uint64_t amount);

 private:
  const uint64_t account_id_;
  int64_t balance_;
};

#endif  // BEARATM_ACCOUNT_H