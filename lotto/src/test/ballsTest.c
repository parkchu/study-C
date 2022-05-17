#include "unity_fixture.h"
#include "balls.h"

TEST_GROUP(ballsTest);

TEST_SETUP(ballsTest)
{
}

TEST_TEAR_DOWN(ballsTest)
{
}

TEST(ballsTest, init)
{
	balls balls;

	balls = make_balls();

	TEST_ASSERT_EQUAL(balls.value[0], 1);
	TEST_ASSERT_EQUAL(balls.value[44], 45);
}

TEST(ballsTest, get_six_numbers)
{
	balls balls = make_balls();
	int	*numbers;

	numbers = get_numbers(balls, 6);

	TEST_ASSERT_EQUAL(numbers[0], 1);
	TEST_ASSERT_EQUAL(numbers[1], 2);
	TEST_ASSERT_EQUAL(numbers[2], 3);
	TEST_ASSERT_EQUAL(numbers[3], 4);
	TEST_ASSERT_EQUAL(numbers[4], 5);
	TEST_ASSERT_EQUAL(numbers[5], 6);
}

TEST_GROUP_RUNNER(ballsTest)
{
	RUN_TEST_CASE(ballsTest, init);
	RUN_TEST_CASE(ballsTest, get_six_numbers);
}
