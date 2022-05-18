#include "lotto_service.h"
#include "lotto_ui.h"

int	main(void)
{
	lotto_service service = make_lotto_service();
	int	money = 0;
	int	prize_money = 0;
	int correct_numbers[6] = {0, };

	money = input_money();
	money -= buy_lottos(&service, money);
	show_lottos(service.lottos.size, get_lotto_numbers(service));
	input_correct_numbers(correct_numbers);
	prize_money += get_prize_money(&service, correct_numbers);
	show_result(service.lottos.ranking, money, prize_money);
	return 0;
}
