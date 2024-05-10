#include "gtest/gtest.h"
#include "Card.hpp"

TEST(CardTest, CompareID) {
    Card card(10);

    ASSERT_EQ(card.compareID(10), 0);
    ASSERT_EQ(card.compareID(100), 1);
}