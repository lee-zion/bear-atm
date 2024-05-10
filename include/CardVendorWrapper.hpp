#ifndef BEARATM_CARDVENDORWRAPPER_H
#define BEARATM_CARDVENDORWRAPPER_H

#include <cstdint>
#include <vector>
#include "CardVendor.hpp"
#include "AtmStatus.hpp"

class CardVendorWrapper {
 public:
    CardVendorWrapper(CardVendor* cardVendor);
    AtmStatus GetBankList(uint64_t card_id, std::vector<int>& bankList);

 private:
    CardVendor* cardVendor_;
};

#endif  // BEARATM_CARDVENDORWRAPPER_H