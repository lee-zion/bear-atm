#include "CardVendorWrapper.hpp"

CardVendorWrapper::CardVendorWrapper(CardVendor* cardVendor) : cardVendor_(cardVendor) {}

AtmStatus CardVendorWrapper::GetBankList(Card* card, std::vector<int>& bankList) {
    bankList = this->cardVendor_->GetBankList(card);
    return OK;
}

AtmStatus CardVendorWrapper::ValidatePIN(Card* card) {
    if (cardVendor_->ValidatePIN(card)) return OK;
    return ERR_PIN;
}