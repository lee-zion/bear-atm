#include "CardReaderWrapper.hpp"

CardReaderWrapper::CardReaderWrapper(CardReader* cardReader) : cardReader_(cardReader) {}

AtmStatus CardReaderWrapper::GetCardVendorID(Card* card, uint64_t& card_vendor_id) {
    card_vendor_id = this->cardReader_->GetCardVendorID(card);
    return OK;
}