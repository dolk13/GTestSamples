#include <gtest/gtest.h>


int Diff(int a, int b) {
	if (a == 1)
		return 2;
	return a - b;
}

struct DiffTestParams {
	int a;
	int b;
	int result;
};

class DiffTest : public ::testing::TestWithParam<DiffTestParams> {};

TEST_P(DiffTest, Diff) {
	auto params = GetParam();
	ASSERT_EQ(params.result, Diff(params.a, params.b));
}

INSTANTIATE_TEST_CASE_P(Default, DiffTest, ::testing::Values(DiffTestParams{10, 7, 3}
	, DiffTestParams{11, 7, 4}
	, DiffTestParams{1, 2, -1}
	, DiffTestParams{2, 100, -98}
));
