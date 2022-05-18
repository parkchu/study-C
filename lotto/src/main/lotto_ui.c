#include <stdio.h>
#include <stdlib.h>
#include "lotto.h"

int	input_money()
{
	int money = 0;

	printf("구입 금액을 입력해 주세요!\n");
	scanf("%d", &money);
	return money;
}

void	show_lotto(lotto lotto)
{
	printf("[%d, ", lotto.numbers[0]);
	printf("%d, ", lotto.numbers[1]);
	printf("%d, ", lotto.numbers[2]);
	printf("%d, ", lotto.numbers[3]);
	printf("%d, ", lotto.numbers[4]);
	printf("%d]\n", lotto.numbers[5]);
}

void	show_lottos(int	size, lotto *lottos)
{
	int	index = 0;

	printf("%d개를 구매했습니다.\n", size);
	while (index < size)
	{
		show_lotto(lottos[index]);
		index++;
	}
	printf("\n");
}

void	input_correct_numbers(int *correct_numbers)
{
	char	string[100];
	char	*start;
	int		index = 0;
	int		size = 0;

	printf("당첨 번호를 입력해 주세요.\n");
	scanf(" %[^\n]", string);
	start = string;
	while (string[index])
	{
		if (string[index] == ',')
		{
			string[index] = 0;
			correct_numbers[size] = atoi(start);
			size++;
			start = string + index + 1;
		}
		index++;
	}
	correct_numbers[size] = atoi(start);
	printf("\n");
}

void	show_result(int *ranking, int use_money, int prize_money)
{
	float rate_of_return;

	printf("당첨 통계\n");
	printf("---------\n");
	printf("3개 일치 (5000원)- %d개\n", ranking[3]);
	printf("4개 일치 (50000원)- %d개\n", ranking[4]);
	printf("5개 일치 (1500000원)- %d개\n", ranking[5]);
	printf("6개 일치 (2000000000원)- %d개\n", ranking[6]);
	rate_of_return = (float) prize_money / (float) use_money;
	printf("총 수익률은 %.3f입니다.(기준이 1이기 때문에 1을 넘기지 못했으면 손해입니다)\n", rate_of_return);
}
