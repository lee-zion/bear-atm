#include "CardVendorWrapper.hpp"

CardVendorWrapper::CardVendorWrapper(CardVendor* cardVendor) : cardVendor_(cardVendor) {}

AtmStatus CardVendorWrapper::GetBankList(uint64_t card_id, std::vector<int>& bankList) {
    bankList = this->cardVendor_->GetBankList(card_id);
    return OK;  // Assuming OK is a valid AtmStatus
}