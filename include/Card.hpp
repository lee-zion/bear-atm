#ifndef BEARATM_CARD_H
#define BEARATM_CARD_H

#include <cstdint>
#include "AtmStatus.hpp"

class Card {
 public:
  Card(uint64_t id);
  AtmStatus compareID(uint64_t external_id);

 private:
  uint64_t id_;
};

#endif  // BEARATM_CARD_H