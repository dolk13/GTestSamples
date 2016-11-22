#include <gtest/gtest.h>


TEST(FloatAndNear, CompareTwoFloatViaAssertEq) {
	float a = 1.1;
	float b = 1.1;
	ASSERT_EQ(2.2, a+b);
}

TEST(FloatAndNear, CompareTwoFloatViaAssertFloatEq) {
	float a = 1.1;
	float b = 1.1;
	ASSERT_FLOAT_EQ(2.2, a+b);	
}

TEST(FloatAndNear, CompareTwoSimilarNumbers) {
	ASSERT_NEAR(10, 11, 1);
}
