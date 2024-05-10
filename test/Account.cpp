#include "gtest/gtest.h"
#include "Account.hpp"

TEST(AccountTest, GetAndSetBalance) {
    Account *account = new Account(1, 100);
    ASSERT_EQ(account->getBalance(), 100);
    account->setBalance(10000);
    ASSERT_EQ(account->getBalance(), 10000);
}