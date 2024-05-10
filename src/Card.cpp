#include "Card.hpp"

Card::Card(uint64_t id) : id_(id) {}

uint64_t Card::GetAccountID() const {
    return id_;
}

uint64_t Card::GetAccountID() const {
    return account_id_;
}

std::vector<uint64_t> Card::GetBankIDs() {
    return this->bankIDs_;
}