#include "CardReader.hpp"

CardReader::CardReader(std::string vendor) : vendor_(vendor) {}

uint64_t CardReader::GetCardID(Card* card) {
    return card->GetCardID();
}


uint64_t CardReader::GetCardVendorID(uint64_t card_id) {
    if (card_id < 10) return 1;
    else if (card_id < 20) return 2;
    else return 3;
}