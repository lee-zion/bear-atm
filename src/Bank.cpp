#include "Bank.hpp"

Bank::Bank(uint64_t id) : id_(id) {}

int64_t Bank::GetBalance(Account *account) {
    return account->getBalance();
}

bool Bank::Deposit(Account *account, uint64_t amount) {
    int64_t currentBalance = account->getBalance();
    if (account->setBalance(currentBalance + amount)) return true;
    return false;
}

bool Bank::Withdraw(Account *account, uint64_t amount) {
    int64_t currentBalance = account->getBalance();
    if (amount > currentBalance) return false;
    if (account->setBalance(currentBalance - amount)) return true;
    return false;
}

bool Bank::AddAccount(Account *account) {
    this->accounts_[account->GetAccountID()].push_back(*account);
    return true;
}