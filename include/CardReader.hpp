#ifndef BEARATM_CARDREADER_H
#define BEARATM_CARDREADER_H

#include <cstdint>
#include <string>
#include <vector>

#include "Card.hpp"

class CardReader {
 public:
  CardReader(std::string vendor);
  uint64_t GetCardID(Card* card);
  uint64_t GetAccountID(Card* card);
  uint64_t CardReader::GetCardVendorID(Card* card);

 private:
  std::string vendor_;
};

#endif  // BEARATM_CARDREADER_H