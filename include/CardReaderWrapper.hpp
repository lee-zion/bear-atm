#ifndef BEARATM_CARDREADERWRAPPER_H
#define BEARATM_CARDREADERWRAPPER_H

#include <cstdint>
#include <vector>

#include "AtmStatus.hpp"
#include "CardReader.hpp"

class CardReaderWrapper {
 public:
  CardReaderWrapper(CardReader *cardReader);
  AtmStatus GetCardVendorID(Card *card, uint64_t& card_vendor_id);

 private:
  CardReader *cardReader_;
};

#endif  // BEARATM_CARDREADERWRAPPER_H