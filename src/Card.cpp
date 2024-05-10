#include <Card.hpp>

Card::Card(uint64_t id) : id_(id) {}

AtmStatus Card::compareID(uint64_t external_id) {
    if (external_id == id_) return OK;
    return ERR_CARD;
}