#ifndef LOTTO_SERVICE_H
#define LOTTO_SERVICE_H
#include "balls.h"
#include "lottos.h"
#include "ranking.h"

typedef struct s_lotto_service
{
	balls balls;
	lottos lottos;
	int	ranking[7];
} lotto_service;

lotto_service	make_lotto_service();

int	buy_lottos(lotto_service *service, int money);

int get_prize_money(lotto_service *service, int *correct_numbers);

#endif
