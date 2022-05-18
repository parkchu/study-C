#include <stdlib.h>
#include "lottos.h"

lottos	make_lottos()
{
	lottos lottos;
	int	index = 0;

	lottos.value = malloc(0);
	lottos.size = 0;
	while (index < 7)
	{
		lottos.ranking[index] = 0;
		index++;
	}
	return lottos;
}

void	buy(lottos *lottos, int *numbers)
{
	int		size;
	lotto	lotto;

	size = ++lottos->size;
	lottos->value = realloc(lottos->value, sizeof(lotto) * size);
	lotto = make_lotto(numbers);
	lottos->value[size - 1] = lotto;
}

void	set_ranking(lottos *lottos, int *correct_numbers)
{
	int	size = lottos->size - 1;

	while (size >= 0)
	{
		lottos->ranking[get_correct_count(lottos->value[size], correct_numbers)] += 1;
		size--;
	}
}
