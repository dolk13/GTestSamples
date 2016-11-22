#include <gtest/gtest.h>


class Foo {
public:
	std::string Print() const {
		return "Foo is better than Bar";
	}
};

std::ostream& operator<<(std::ostream& os, const Foo& foo) {
	return os << foo.Print();
}

TEST(PrintValues, PrintFoo) {
	Foo foo;
	ASSERT_TRUE(false) << "foo = " << ::testing::PrintToString(foo);
}

TEST(PrintValues, AnyMessage) {
	EXPECT_TRUE(true) << "first any message";
	EXPECT_FALSE(true) << "second any message";
}
