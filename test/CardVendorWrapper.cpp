#include "gtest/gtest.h"
#include "Card.hpp"
#include "CardVendor.hpp"
#include "CardVendorWrapper.hpp"

TEST(CardVendorWrapperTest, GetBankList) {
    Card *card1 = new Card(1);

    CardVendor *cardVendor = new CardVendor("nice");
    CardVendorWrapper *cardVendorWrapper = new CardVendorWrapper(cardVendor);

    std::unordered_map<uint64_t, std::vector<int>> sampleData = {
        {1, {1}},
        {2, {4, 5, 6}},
        {3, {7, 8, 9}}
    };
    cardVendor->SetCardToBanksMap(sampleData);

    std::vector<int> bankList;
    AtmStatus status = cardVendorWrapper->GetBankList(card1, bankList);

    ASSERT_EQ(status, OK);

    std::vector<int> expectedBankList = {1};
    ASSERT_EQ(bankList, expectedBankList);
}