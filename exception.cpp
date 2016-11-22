#include <gtest/gtest.h>

class Exception {};

void FuncWithException(void* ptr) {
	if (ptr == nullptr)
		throw Exception();
}

TEST(Exception, ThrowExceptionWhenPointerIsNull) {
	ASSERT_THROW(FuncWithException(nullptr), Exception);
}

class BadException {};

TEST(Exception, ThrowBadExceptionWhenPointerIsNull) {
	ASSERT_THROW(FuncWithException(nullptr), BadException);
}

TEST(Exception, ThrowAnyExceptionWhenPointerIsNull) {
	ASSERT_ANY_THROW(FuncWithException(nullptr));
}

TEST(Exception, NoThrowExceptionWhenPointerIsNull) {
	ASSERT_NO_THROW(FuncWithException(nullptr));
}
