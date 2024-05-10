#include "gtest/gtest.h"
#include "Card.hpp"
#include "CardVendorWrapper.hpp"
#include "CardVendor.hpp"

TEST(CardVendorWrapperTest, GetBankList) {
    Card card1(1);
    uint64_t card1ID = card1.GetCardID();

    CardVendor cardVendor("nice");
    CardVendorWrapper cardVendorWrapper(&cardVendor);

    std::unordered_map<uint64_t, std::vector<int>> sampleData = {
        {1, {1}},
        {2, {4, 5, 6}},
        {3, {7, 8, 9}}
    };
    cardVendor.SetCardToBanksMap(sampleData);

    std::vector<int> bankList;
    AtmStatus status = cardVendorWrapper.GetBankList(card1ID, bankList);

    ASSERT_EQ(status, OK);

    std::vector<int> expectedBankList = {1};
    ASSERT_EQ(bankList, expectedBankList);
}