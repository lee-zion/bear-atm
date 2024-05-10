#include "CashBinWrapper.hpp"

#include <iostream>

CashBinWrapper::CashBinWrapper(CashBin *cashBin) : cashBin_(cashBin) {}

AtmStatus CashBinWrapper::WithdrawCash(int amount) {
  if (!this->cashBin_->WithdrawCash(amount)) return ERR_CASHBIN;
  // std::cout << "Withdrawed " << amount << " dollars" << std::endl;
  return OK;
}