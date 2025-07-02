#include "gmock/gmock.h"
#include "prime-factors.cpp"
using namespace std;

class PrimeFactorsFixture : public testing::Test {
public:
    PrimeFactors primeFactors;
    vector<int> expected;
};
TEST_F(PrimeFactorsFixture, Of1)
{
    expected = {};
    EXPECT_EQ(expected, primeFactors.of(1));
}
TEST_F(PrimeFactorsFixture, Of2)
{
    expected = { 2 };
    EXPECT_EQ(expected, primeFactors.of(2));
}
TEST_F(PrimeFactorsFixture, Of3)
{
    expected = { 3 };
    EXPECT_EQ(expected, primeFactors.of(3));
}