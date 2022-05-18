#include "unity_fixture.h"
#include "lottos.h"

TEST_GROUP(lottosTest);

TEST_SETUP(lottosTest)
{
}

TEST_TEAR_DOWN(lottosTest)
{
}

TEST(lottosTest, make_lottos)
{
	lottos lottos;

	lottos = make_lottos();

	TEST_ASSERT_EQUAL(lottos.size, 0);
}

TEST(lottosTest, buy_lotto)
{
	lottos lottos = make_lottos();
	int	numbers[6] = {1, 2, 3, 4, 5, 6};

	buy(&lottos, numbers);

	TEST_ASSERT_EQUAL(lottos.size, 1);
	TEST_ASSERT_EQUAL(lottos.value[0].numbers[0], 1);
	TEST_ASSERT_EQUAL(lottos.value[0].numbers[1], 2);
	TEST_ASSERT_EQUAL(lottos.value[0].numbers[2], 3);
	TEST_ASSERT_EQUAL(lottos.value[0].numbers[3], 4);
	TEST_ASSERT_EQUAL(lottos.value[0].numbers[4], 5);
	TEST_ASSERT_EQUAL(lottos.value[0].numbers[5], 6);
}

TEST(lottosTest, set_ranking)
{
	lottos lottos = make_lottos();
	int numbers1[6] = {1, 2, 3, 4, 5, 6};
	int	numbers2[6] = {1, 3, 5, 7, 9, 11};
	int	numbers3[6] = {2, 4, 6, 8, 10, 12};
	int	correct_numbers[6] = {1, 2, 3, 4, 5, 6};
	buy(&lottos, numbers1);
	buy(&lottos, numbers2);
	buy(&lottos, numbers3);

	set_ranking(&lottos, correct_numbers);

	TEST_ASSERT_EQUAL(lottos.ranking[0], 0);
	TEST_ASSERT_EQUAL(lottos.ranking[1], 0);
	TEST_ASSERT_EQUAL(lottos.ranking[2], 0);
	TEST_ASSERT_EQUAL(lottos.ranking[3], 2);
	TEST_ASSERT_EQUAL(lottos.ranking[4], 0);
	TEST_ASSERT_EQUAL(lottos.ranking[5], 0);
	TEST_ASSERT_EQUAL(lottos.ranking[6], 1);
}

TEST_GROUP_RUNNER(lottosTest)
{
	RUN_TEST_CASE(lottosTest, make_lottos);
	RUN_TEST_CASE(lottosTest, buy_lotto);
	RUN_TEST_CASE(lottosTest, set_ranking);
}
