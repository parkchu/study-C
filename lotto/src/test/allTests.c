#include "unity_fixture.h"

static void	RunAllTests(void)
{
	RUN_TEST_GROUP(ballsTest);
	RUN_TEST_GROUP(lottoTest);
	RUN_TEST_GROUP(utilTest);
	RUN_TEST_GROUP(rankingTest);
}

int	main(int argc, const char *argv[])
{
	return UnityMain(argc, argv, RunAllTests);
}
