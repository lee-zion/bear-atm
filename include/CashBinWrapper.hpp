#ifndef BEARATM_CASHBINWRAPPER_H
#define BEARATM_CASHBINWRAPPER_H

#include <cstdint>

#include "AtmStatus.hpp"
#include "CashBin.hpp"

class CashBinWrapper {
 public:
  CashBinWrapper(CashBin *cashBin);
  AtmStatus WithdrawCash(int amount);

 private:
  uint64_t balance_;
  CashBin *cashBin_;
};

#endif  // BEARATM_CASHBINWRAPPER_H