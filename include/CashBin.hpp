#ifndef BEARATM_CASHBIN_H
#define BEARATM_CASHBIN_H

#include <cstdint>
#include <string>

#include "AtmStatus.hpp"

class CashBin {
 public:
  CashBin(std::string vendor, uint64_t balance);
  bool WithdrawCash(int amount);

 private:
  uint64_t balance_;
  std::string vendor_;
};

#endif  // BEARATM_CASHBIN_H