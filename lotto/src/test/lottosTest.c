#include "unity_fixture.h"
#include "lottos.h"

TEST_GROUP(lottosTest);

TEST_SETUP(lottosTest)
{
}

TEST_TEAR_DOWN(lottosTest)
{
}

TEST(lottosTest, make_lotto)
{
	lotto lotto;
	int	numbers[6] = {5, 12, 17, 20, 25, 40};

	lotto = make_lotto(numbers);

	TEST_ASSERT_EQUAL(lotto.numbers[0], numbers[0]);
	TEST_ASSERT_EQUAL(lotto.numbers[1], numbers[1]);
	TEST_ASSERT_EQUAL(lotto.numbers[2], numbers[2]);
	TEST_ASSERT_EQUAL(lotto.numbers[3], numbers[3]);
	TEST_ASSERT_EQUAL(lotto.numbers[4], numbers[4]);
	TEST_ASSERT_EQUAL(lotto.numbers[5], numbers[5]);
}

TEST_GROUP_RUNNER(lottosTest)
{
	RUN_TEST_CASE(lottosTest, make_lotto);
}
