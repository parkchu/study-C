#ifndef LOTTO_H
#define LOTTO_H

typedef struct s_lotto
{
	int numbers[6];	
} lotto;

lotto	make_lotto(int *numbers);

int	get_correct_count(lotto lotto, int *correct_numbers);

#endif
