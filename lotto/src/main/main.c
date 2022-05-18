#include "lotto_ui.h"
#include "lotto_service.h"

int	main(void)
{
	lotto_service service = make_lotto_service();
	int	money = input_money();
	int	prize_money = 0;
	int correct_numbers[6] = {0, };

	money -= buy_lottos(&service, money);
	show_lottos(service.lottos.size, get_lotto_numbers(service));
	input_correct_numbers(correct_numbers);
	prize_money += get_prize_money(&service, correct_numbers);
	show_result(service.lottos.ranking, money, prize_money);
	return 0;
}
