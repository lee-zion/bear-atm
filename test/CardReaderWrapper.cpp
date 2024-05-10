#include "gtest/gtest.h"
#include "Card.hpp"
#include "CardReaderWrapper.hpp"


TEST(CardReaderWrapperTest, GetCardVendorID) {
    Card *card1 = new Card(1);
    Card *card2 = new Card(11);

    CardReader *cardReader = new CardReader("nice");

    ASSERT_EQ(cardReader->GetCardVendorID(card1), 1);
    ASSERT_EQ(cardReader->GetCardVendorID(card2), 2);
}