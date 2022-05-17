#include "unity_fixture.h"
#include "ranking.h"

TEST_GROUP(rankingTest);

TEST_SETUP(rankingTest)
{
}

TEST_TEAR_DOWN(rankingTest)
{
}

TEST(rankingTest, get_money)
{
	int	first = 0;
	int	second = 0;
	int	third = 0;
	int	fourth = 0;
	int	fifth = 1;

	first = get_money(6);
	second = get_money(5);
	third = get_money(4);
	fourth = get_money(3);
	fifth = get_money(2);

	TEST_ASSERT_EQUAL(first, 2000000000);
	TEST_ASSERT_EQUAL(second, 1500000);
	TEST_ASSERT_EQUAL(third, 50000);
	TEST_ASSERT_EQUAL(fourth, 5000);
	TEST_ASSERT_EQUAL(fifth, 0);
}

TEST_GROUP_RUNNER(rankingTest)
{
	RUN_TEST_CASE(rankingTest, get_money);
}
