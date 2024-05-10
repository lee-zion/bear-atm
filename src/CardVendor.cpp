#include "CardVendor.hpp"

#include <iostream>

CardVendor::CardVendor(const std::string& name) : name_(name) {}

std::vector<int> CardVendor::GetBankList(Card *card) {
  auto cardID = card->GetCardID();
  if (cardToBanksMap_.find(cardID) != cardToBanksMap_.end()) {
    return cardToBanksMap_[cardID];
  } else {
    return std::vector<int>();
  }
}

bool CardVendor::ValidatePIN(Card *card, std::string pin) {
  // PIN is always 000000
  return pin == "000000";
}

bool CardVendor::ValidatePINConsole(Card *card) {
  // only 6 digit of userID is set to PIN
  // if userID is longer than 6 digits, trim 6 digits from right
  // if userID is shorter than 6 digits, pad 0's from left
  uint64_t input;
  auto userID = card->GetCardID();
  std::cout << "if cardID is longer than 6 digits, trim 6 digits from right" << std::endl;
  std::cout << "if cardID is shorter than 6 digits, pad 0's from left" << std::endl;
  std::cout << "Example) cardID = 1 , then PIN = 000001 ";
  std::cout << "current cardID: " << userID << std::endl;
  std::cout << "Enter PIN: " << userID << std::endl;
  std::cin >> input;

  userID = userID % 1000000;
  input = input % 1000000;
  return input == userID;
}

void CardVendor::SetCardToBanksMap(
    const std::unordered_map<uint64_t, std::vector<int>>& map) {
  cardToBanksMap_ = map;
}
