#ifndef BEARATM_ATMCONTROLLER_H
#define BEARATM_ATMCONTROLLER_H

// #include "BankWrapper.hpp"
// #include "CashBinWrapper.hpp"
#include "CardReaderWrapper.hpp"
#include "CardVendorWrapper.hpp"

class ATMController {
 public:
  // ATMController(BankWrapper* bankWrapper, CashBinWrapper* cashBinWrapper,
  // CardReaderWrapper* cardReaderWrapper);
  ATMController(CardReaderWrapper* cardReaderWrapper,
                CardVendorWrapper* cardVendorWrapper);

 private:
  CardReaderWrapper* cardReaderWrapper_;
  CardVendorWrapper* cardVendorWrapper_;
};

#endif  // BEARATM_ATMCONTROLLER_H