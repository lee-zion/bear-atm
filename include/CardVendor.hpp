#ifndef BEARATM_CARDVENDOR_H
#define BEARATM_CARDVENDOR_H

#include <cstdint>
#include <vector>
#include <unordered_map>
#include <string>

class CardVendor {
 public:
     CardVendor(const std::string& name);
     std::vector<int> GetBankList(uint64_t card_id);
     void SetCardToBanksMap(const std::unordered_map<uint64_t, std::vector<int>>& map);

 private:
     std::string name_;
     std::unordered_map<uint64_t, std::vector<int>> cardToBanksMap_;
};

#endif  // BEARATM_CARDVENDOR_H