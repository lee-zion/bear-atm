#include "Account.hpp"

Account::Account(uint64_t account_id, int64_t balance) : account_id_(account_id), balance_(balance) {}

int64_t Account::getBalance() {
    return this->balance_;
}

uint64_t Account::GetAccountID() {
    return this->account_id_;
}

bool Account::setBalance(uint64_t amount) {
    this->balance_  = amount;
    return true;
}
