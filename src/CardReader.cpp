#include "CardReader.hpp"

CardReader::CardReader(std::string vendor) : vendor_(vendor) {}

uint64_t CardReader::GetCardID(Card* card) {
    return card->GetCardID();
}

uint64_t CardReader::GetAccountID(Card* card) {
    return card->GetAccountID();
}

uint64_t CardReader::GetCardVendorID(Card* card) {
    uint64_t cardID = card->GetCardID();
    if (cardID < 10) return 1;
    else if (cardID < 20) return 2;
    else return 3;
}