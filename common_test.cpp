#include <gtest/gtest.h>

int Sum(int a, int b)
{
	return a+b;
}


TEST(Common, Sum2And5IsEqualTo7)
{
	ASSERT_EQ(7, Sum(2, 5));
	ASSERT_EQ(7, Sum(5, 2));
}
