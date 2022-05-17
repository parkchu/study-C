#include "lottos.h"

lotto	make_lotto(int *numbers)
{
	lotto lotto;

	lotto.numbers[0] = numbers[0];
	lotto.numbers[1] = numbers[1];
	lotto.numbers[2] = numbers[2];
	lotto.numbers[3] = numbers[3];
	lotto.numbers[4] = numbers[4];
	lotto.numbers[5] = numbers[5];
	return lotto;
}
