#include "gtest/gtest.h"
#include "CashBinWrapper.hpp"

TEST(CardBinWrapperTest, WithdrawCash) {
    CashBin *cashBin = new CashBin("bin_maker", 100);
    CashBinWrapper *cashBinWrapper = new CashBinWrapper(cashBin);

    ASSERT_EQ(cashBinWrapper->WithdrawCash(1000), ERR_CASHBIN);
    ASSERT_EQ(cashBinWrapper->WithdrawCash(10), OK);
}