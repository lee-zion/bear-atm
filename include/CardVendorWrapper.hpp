#ifndef BEARATM_CARDVENDORWRAPPER_H
#define BEARATM_CARDVENDORWRAPPER_H

#include <cstdint>
#include <vector>
#include "Card.hpp"
#include "CardVendor.hpp"
#include "AtmStatus.hpp"

class CardVendorWrapper {
 public:
    CardVendorWrapper(CardVendor* cardVendor);
    AtmStatus GetBankList(Card* card, std::vector<int>& bankList);
    AtmStatus ValidatePIN(Card* card);

 private:
    CardVendor* cardVendor_;
};

#endif  // BEARATM_CARDVENDORWRAPPER_H