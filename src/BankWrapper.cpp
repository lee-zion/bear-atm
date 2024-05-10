#include "BankWrapper.hpp"

BankWrapper::BankWrapper(Bank *bank) : bank_(bank) {}

AtmStatus BankWrapper::GetBalance(Account *account) {
    this->bank_->GetBalance(account);
}
AtmStatus BankWrapper::Deposit(Account *account, uint64_t amount) {
    this->bank_->Deposit(account, amount);
}
AtmStatus BankWrapper::Withdraw(Account *account, uint64_t amount) {
    this->bank_->Withdraw(account, amount);
}