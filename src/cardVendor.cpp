#include "CardVendor.hpp"

CardVendor::CardVendor(const std::string& name) : name_(name) {}

std::vector<int> CardVendor::GetBankList(uint64_t card_id) {
    if (cardToBanksMap_.find(card_id) != cardToBanksMap_.end()) {
        return cardToBanksMap_[card_id];
    } else {
        return std::vector<int>();  // Return empty vector if card_id not found
    }
}

void CardVendor::SetCardToBanksMap(const std::unordered_map<uint64_t, std::vector<int>>& map) {
    cardToBanksMap_ = map;
}