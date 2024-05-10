#ifndef BEARATM_CARD_H
#define BEARATM_CARD_H

#include <cstdint>
#include <vector>

#include "AtmStatus.hpp"

class Card {
 public:
  Card(uint64_t id);
  uint64_t GetCardID();
  uint64_t GetAccountID();
  std::vector<uint64_t> GetBankIDs();

 private:
  uint64_t id_;
  uint64_t account_id_;
  std::vector<uint64_t> bankIDs_;
};

#endif  // BEARATM_CARD_H