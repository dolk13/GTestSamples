#include <gtest/gtest.h>

#include <cstdlib>
#include <csignal>

void FailureExit() {
	std::exit(1);
}

void KillMyself() {
	std::raise(SIGKILL);
}

void CrashMyself() {
	int* a;
	*a = 100;
}

TEST(DeathTest, FailureExitWithCode1) {
	EXPECT_EXIT(FailureExit(), ::testing::ExitedWithCode(1), "");
}

TEST(DeathTest, FailureExitWithCode2) {
	EXPECT_EXIT(FailureExit(), ::testing::ExitedWithCode(2), "");	
}

TEST(DeathTest, KillMyself) {
	EXPECT_EXIT(KillMyself(), ::testing::KilledBySignal(SIGKILL), "");
}

TEST(DeathTest, CrashMyself) {
	ASSERT_DEATH(CrashMyself(), "");
}
