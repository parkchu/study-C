#include "unity_fixture.h"
#include "lotto.h"

TEST_GROUP(lottoTest);

TEST_SETUP(lottoTest)
{
}

TEST_TEAR_DOWN(lottoTest)
{
}

TEST(lottoTest, make_lotto)
{
	lotto lotto;
	int	numbers[6] = {5, 12, 17, 20, 25, 40};

	lotto = make_lotto(numbers);

	TEST_ASSERT_EQUAL(lotto.numbers[0], 5);
	TEST_ASSERT_EQUAL(lotto.numbers[1], 12);
	TEST_ASSERT_EQUAL(lotto.numbers[2], 17);
	TEST_ASSERT_EQUAL(lotto.numbers[3], 20);
	TEST_ASSERT_EQUAL(lotto.numbers[4], 25);
	TEST_ASSERT_EQUAL(lotto.numbers[5], 40);
}

TEST(lottoTest, sort_lotto_numbers)
{
	lotto lotto;
	int numbers[6] = {40, 25, 12, 5, 20, 17};

	lotto = make_lotto(numbers);

	TEST_ASSERT_EQUAL(lotto.numbers[0], 5);
	TEST_ASSERT_EQUAL(lotto.numbers[1], 12);
	TEST_ASSERT_EQUAL(lotto.numbers[2], 17);
	TEST_ASSERT_EQUAL(lotto.numbers[3], 20);
	TEST_ASSERT_EQUAL(lotto.numbers[4], 25);
	TEST_ASSERT_EQUAL(lotto.numbers[5], 40);
}

TEST(lottoTest, get_correct_count)
{
	int count = 0;
	int correct_numbers[6] = {1, 2, 3, 4, 5, 12};
	int numbers[6] = {40, 25, 12, 5, 20, 17};
	lotto lotto = make_lotto(numbers);

	count = get_correct_count(lotto, correct_numbers);

	TEST_ASSERT_EQUAL(count, 2);
}

TEST_GROUP_RUNNER(lottoTest)
{
	RUN_TEST_CASE(lottoTest, make_lotto);
	RUN_TEST_CASE(lottoTest, sort_lotto_numbers);
	RUN_TEST_CASE(lottoTest, get_correct_count);
}
