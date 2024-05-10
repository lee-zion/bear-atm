#include "CashBin.hpp"

CashBin::CashBin(std::string vendor, uint64_t balance)
    : vendor_(vendor), balance_(balance) {}

bool CashBin::WithdrawCash(int amount) {
  if (this->balance_ < amount) return false;
  this->balance_ -= amount;
  return true;
}