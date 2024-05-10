#include "gtest/gtest.h"
#include "AtmController.hpp"

TEST(AtmControllerTest, IntegrationTest) {
    Card *card1 = new Card(1);
    Card *card2 = new Card(11);

    CardReader *cardReader = new CardReader("nice");
    ASSERT_EQ(cardReader->GetCardVendorID(card1), 1);
    ASSERT_EQ(cardReader->GetCardVendorID(card2), 2);

    CardVendor *cardVendor = new CardVendor("hyundai");
    CardVendorWrapper *cardVendorWrapper = new CardVendorWrapper(cardVendor);
    
    AtmStatus result = cardVendorWrapper->ValidatePIN(card1, "000000");
    ASSERT_EQ(result, OK);
    
    result = cardVendorWrapper->ValidatePIN(card2, "000000");
    ASSERT_EQ(result, OK);
    
    result = cardVendorWrapper->ValidatePIN(card1, "000001");
    ASSERT_EQ(result, ERR_PIN);
    
    result = cardVendorWrapper->ValidatePIN(card2, "000001");
    ASSERT_EQ(result, ERR_PIN);
    
    // std::stringstream input;
    // input << "000001\n";
    // result = cardVendorWrapper->ValidatePINConsole(card1);
    // ASSERT_EQ(result, OK);
}