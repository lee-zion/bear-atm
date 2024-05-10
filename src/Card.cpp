#include "Card.hpp"

Card::Card(uint64_t id) : id_(id) {}

uint64_t Card::GetCardID() {
    return this->id_;
}

std::vector<uint64_t> Card::GetBankIDs() {
    return this->bankIDs_;
}