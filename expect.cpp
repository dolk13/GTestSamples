#include <gtest/gtest.h>

bool Func(void* ptr)
{
	return ptr == nullptr;
}


TEST(Expect, ReturnFalseIfArgIsNullptr)
{
	EXPECT_EQ(false, Func(nullptr));
	int* a = new int(10);
	EXPECT_EQ(true, Func(a));
}
