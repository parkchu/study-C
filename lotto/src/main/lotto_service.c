#include "lotto_service.h"

lotto_service make_lotto_service()
{
	lotto_service service;
	int	index = 0;

	service.balls = make_balls();
	service.lottos = make_lottos();
	while (index < 7)
	{
		service.ranking[index] = 0;
		index++;
	}
	return service;
}

int	buy_lottos(lotto_service *service, int money)
{
	int	amount = money / 1000;
	int	*numbers;

	while (amount > 0)
	{
		numbers = get_numbers(shuffle(service->balls), 6);
		buy(&service->lottos, numbers);
		amount--;
	}
	return money % 1000;
}

int	get_prize_money(lotto_service *service, int *correct_numbers)
{
	int	prize_money = 0;
	int	count = 0;

	set_ranking(service->lottos, service->ranking, correct_numbers);
	while (count <= 6)
	{
		prize_money += service->ranking[count] * get_money(count);
		count++;
	}
	return prize_money;
}
