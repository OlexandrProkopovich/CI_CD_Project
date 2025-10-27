#include "sum.h"
#include "gtest/gtest.h"

TEST(ArrayTestSum, BasicPositiveNumbers)
{
    std::vector<int> numbers = {1, 2, 5, 7};
    EXPECT_EQ(my_app::array_sum(numbers), 15);
}


TEST(ArraySumTest, EmptyVector) {
    std::vector<int> numbers = {};
    EXPECT_EQ(my_app::array_sum(numbers), 0);
}

TEST(ArraySumTest, NegativeNumbers) {
    std::vector<int> numbers = {-1, -2, -3};
    EXPECT_EQ(my_app::array_sum(numbers), -6);
}

TEST(ArraySumTest, MixedNumbers) {
    std::vector<int> numbers = {-5, 10, -3, 8};
    EXPECT_EQ(my_app::array_sum(numbers), 10);
}
