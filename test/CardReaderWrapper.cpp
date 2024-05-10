#include "gtest/gtest.h"
#include "Card.hpp"
#include "CardReaderWrapper.hpp"


TEST(CardReaderWrapperTest, GetCardVendorID) {
    Card card1(1);
    Card card2(11);

    uint64_t card1ID = card1.GetCardID();
    uint64_t card2ID = card2.GetCardID();

    CardReader cardReader("nice");
    ASSERT_EQ(cardReader.GetCardVendorID(card1ID), 1);
    ASSERT_EQ(cardReader.GetCardVendorID(card2ID), 2);
}