#include "unity_fixture.h"
#include "lotto_service.h"

TEST_GROUP(serviceTest);

TEST_SETUP(serviceTest)
{
}

TEST_TEAR_DOWN(serviceTest)
{
}

TEST(serviceTest, buy_lottos)
{
	lotto_service service = make_lotto_service();
	
	buy_lottos(&service, 10000);

	TEST_ASSERT_EQUAL(service.lottos.size, 10);
}

TEST(serviceTest, get_prize_money)
{
	lotto_service service = make_lotto_service();
	int	numbers1[6] = {1, 2, 3, 4, 5, 6};
	int	numbers2[6] = {1, 2, 3, 4, 12, 15};
	int	numbers3[6] = {1, 2, 3, 12, 15, 25};
	int	prize_money = 0;
	int	correct_numbers[6] = {1, 2, 3, 4, 5, 6};
	buy(&service.lottos, numbers1);
	buy(&service.lottos, numbers2);
	buy(&service.lottos, numbers3);
	
	prize_money = get_prize_money(&service, correct_numbers);

	TEST_ASSERT_EQUAL(prize_money, 2000055000);
}

TEST_GROUP_RUNNER(serviceTest)
{
	RUN_TEST_CASE(serviceTest, buy_lottos);
	RUN_TEST_CASE(serviceTest, get_prize_money);
}
