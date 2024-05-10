#include "CardVendor.hpp"

#include <iostream>

CardVendor::CardVendor(const std::string& name) : name_(name) {}

std::vector<int> CardVendor::GetBankList(Card* card) {
  auto cardID = card->GetCardID();
  if (cardToBanksMap_.find(cardID) != cardToBanksMap_.end()) {
    return cardToBanksMap_[cardID];
  } else {
    return std::vector<int>();
  }
}

bool CardVendor::ValidatePIN(Card* card) {
  // only 6 digit of userID is set to PIN
  // if userID is
  uint64_t input;
  std::cout << "Enter PIN: ";
  std::cin >> input;

  auto user_id = card->GetCardID();
  user_id = user_id % 1000000;
  input = input % 1000000;
  return input == user_id;
}

void CardVendor::SetCardToBanksMap(
    const std::unordered_map<uint64_t, std::vector<int>>& map) {
  cardToBanksMap_ = map;
}
