#ifndef LOTTOS_H
#define LOTTOS_H
#include "lotto.h"

typedef struct s_lottos
{
	int size;
	int	ranking[7];
	lotto *value;
} lottos;

lottos	make_lottos();

void	buy(lottos *lottos, int *numbers);

void	set_ranking(lottos *lottos, int *correct_numbers);

#endif
