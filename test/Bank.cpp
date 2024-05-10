#include "gtest/gtest.h"
#include "Bank.hpp"

TEST(BankTest, DepositAndWithdraw) {
    Account *account = new Account(1, 100);
    Bank *bank = new Bank(1);

    // for (int i = 1; i <= 10; ++i) {
    //     Account *account = new Account(i, 100);
    //     bank->AddAccount(account);
    // }

    bank->AddAccount(account);
    ASSERT_EQ(bank->GetBalance(account), 100);
    ASSERT_EQ(bank->Deposit(account, 100), true);
    ASSERT_EQ(bank->GetBalance(account), 200);

    ASSERT_EQ(bank->Withdraw(account, 10000), false);
    ASSERT_EQ(bank->Withdraw(account, 100), true);
    ASSERT_EQ(bank->GetBalance(account), 100);
}