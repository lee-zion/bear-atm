#include "CardReaderWrapper.hpp"

CardReaderWrapper::CardReaderWrapper(CardReader* cardReader) : cardReader_(cardReader) {}

AtmStatus CardReaderWrapper::GetCardVendorID(uint64_t card_id, uint64_t& card_vendor_id) {
    card_vendor_id = this->cardReader_->GetCardVendorID(card_id);
    return OK;
}