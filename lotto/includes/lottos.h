#ifndef LOTTOS_H
#define LOTTOS_H

typedef struct s_lotto
{
	int numbers[6];	
} lotto;

typedef struct s_lottos
{
	lotto *value;
	int	size;
} lottos;

lotto	make_lotto(int *numbers);

#endif
