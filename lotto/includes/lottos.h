#ifndef LOTTOS_H
#define LOTTOS_H
#include "lotto.h"

typedef struct s_lottos
{
	int size;
	lotto *value;
} lottos;

lottos	make_lottos();

void	buy(lottos *lottos, int *numbers);

void	set_ranking(lottos lottos, int *ranking, int *correct_numbers);

#endif
