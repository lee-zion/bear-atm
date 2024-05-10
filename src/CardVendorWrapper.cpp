#include "CardVendorWrapper.hpp"

CardVendorWrapper::CardVendorWrapper(CardVendor* cardVendor) : cardVendor_(cardVendor) {}

AtmStatus CardVendorWrapper::GetBankList(Card* card, std::vector<int>& bankList) {
    bankList = this->cardVendor_->GetBankList(card);
    return OK;
}

AtmStatus CardVendorWrapper::ValidatePIN(Card* card, std::string pin) {
    if (cardVendor_->ValidatePIN(card, pin)) return OK;
    return ERR_PIN;
}

AtmStatus CardVendorWrapper::ValidatePINConsole(Card* card) {
    if (cardVendor_->ValidatePINConsole(card)) return OK;
    return ERR_PIN;
}