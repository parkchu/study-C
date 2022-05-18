#include <stdlib.h>
#include "lotto_service.h"

lotto_service make_lotto_service()
{
	lotto_service service;

	service.balls = make_balls();
	service.lottos = make_lottos();
	service.ranking[0] = 0;
	service.ranking[1] = 0;
	service.ranking[2] = 0;
	service.ranking[3] = 5000;
	service.ranking[4] = 50000;
	service.ranking[5] = 1500000;
	service.ranking[6] = 2000000000;
	return service;
}

int	buy_lottos(lotto_service *service, int money)
{
	int	amount = money / 1000;
	int	*numbers;

	while (amount > 0)
	{
		numbers = get_numbers(shuffle(service->balls, amount), 6);
		buy(&service->lottos, numbers);
		amount--;
	}
	return money % 1000;
}

int	**get_lotto_numbers(lotto_service service)
{
	int	**numbers;
	int	index = 0;

	numbers = malloc(sizeof(int*) * service.lottos.size);
	while (index < service.lottos.size)
	{
		numbers[index] = service.lottos.value[index].numbers;
		index++;
	}
	return numbers;
}

int	get_prize_money(lotto_service *service, int *correct_numbers)
{
	int	prize_money = 0;
	int	rank = 0;

	set_ranking(&service->lottos, correct_numbers);
	while (rank <= 6)
	{
		prize_money += service->lottos.ranking[rank] * service->ranking[rank];
		rank++;
	}
	return prize_money;
}
