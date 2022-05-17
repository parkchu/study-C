#include "lotto.h"
#include "util.h"

lotto	make_lotto(int *numbers)
{
	lotto lotto;

	sort(numbers, 6);
	lotto.numbers[0] = numbers[0];
	lotto.numbers[1] = numbers[1];
	lotto.numbers[2] = numbers[2];
	lotto.numbers[3] = numbers[3];
	lotto.numbers[4] = numbers[4];
	lotto.numbers[5] = numbers[5];
	return lotto;
}

int	get_correct_count(lotto lotto, int *correct_numbers)
{
	int	index = 0;
	int count = 0;

	while (index < 6)
	{
		if (contains_number(6, correct_numbers, lotto.numbers[index]))
			count++;
		index++;
	}
	return count;
}
