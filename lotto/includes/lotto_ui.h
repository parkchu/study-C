#ifndef LOTTO_UI_H
#define LOTTO_UI_H
#include "lotto.h"

int	input_money();

void	show_lottos(int size, lotto *lottos);

void	input_correct_numbers(int *correct_numbers);

void	show_result(int	*ranking, int use_money, int prize_money);

#endif
