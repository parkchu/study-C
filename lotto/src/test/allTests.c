#include "unity_fixture.h"

static void	RunAllTests(void)
{
	RUN_TEST_GROUP(ballsTest);
	RUN_TEST_GROUP(lottosTest);
}

int	main(int argc, const char *argv[])
{
	return UnityMain(argc, argv, RunAllTests);
}
