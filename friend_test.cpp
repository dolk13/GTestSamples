#include <gtest/gtest.h>

class Bar {
public:
	int Get() const { return m_member; }
private:
	FRIEND_TEST(FriendTest, Get);
	int m_member;
};

TEST(FriendTest, Get)
{
	Bar bar;
	bar.m_member = 100;
	ASSERT_EQ(100, bar.Get());
}


