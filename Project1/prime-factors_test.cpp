#include "gmock/gmock.h"
#include "prime-factors.cpp"
using namespace std;

TEST(PrimeFactors, Of1)
{
    PrimeFactors primeFactors;
    vector<int> expected = {};
    EXPECT_EQ(expected, primeFactors.of(1));
}
TEST(PrimeFactors, Of2)
{
    PrimeFactors primeFactors;
    vector<int> expected = {2};
    EXPECT_EQ(expected, primeFactors.of(2));
}