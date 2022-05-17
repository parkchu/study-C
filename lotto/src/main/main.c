#include "lotto_ui.h"
#include "lotto_service.h"

int	main(void)
{
	lotto_service service = make_lotto_service();
	int	money = 1000;
	int	prize_money = 0;
	int correct_numbers[6] = {0, };

	money = buy_lottos(&service, money);
	prize_money = get_prize_money(&service, correct_numbers);
	return 0;
}
