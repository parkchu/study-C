#include "unity_fixture.h"
#include "util.h"

TEST_GROUP(utilTest);

TEST_SETUP(utilTest)
{
}

TEST_TEAR_DOWN(utilTest)
{
}

TEST(utilTest, sort_numbers)
{
	int numbers[6] = {30, 20, 18, 40, 12, 5};

	sort(numbers, 6);

	TEST_ASSERT_EQUAL(numbers[0], 5);
	TEST_ASSERT_EQUAL(numbers[1], 12);
	TEST_ASSERT_EQUAL(numbers[2], 18);
	TEST_ASSERT_EQUAL(numbers[3], 20);
	TEST_ASSERT_EQUAL(numbers[4], 30);
	TEST_ASSERT_EQUAL(numbers[5], 40);
}

TEST(utilTest, contains_number)
{
	int	numbers[6] = {1, 2, 3, 4, 5, 6};
	int	contains_result;
	int	contains_not_result;

	contains_result = contains_number(6, numbers, 3);
	contains_not_result = contains_number(6, numbers, 12);

	TEST_ASSERT_TRUE(contains_result);
	TEST_ASSERT_FALSE(contains_not_result);
}

TEST_GROUP_RUNNER(utilTest)
{
	RUN_TEST_CASE(utilTest, sort_numbers);
	RUN_TEST_CASE(utilTest, contains_number);
}
