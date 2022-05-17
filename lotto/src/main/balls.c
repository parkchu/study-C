#include "balls.h"

void	init(balls *balls)
{
	int	number = 0;

	while (number < 45)
	{
		balls->value[number] = number + 1;
		number++;
	}
}

void	get_numbers(balls balls, int *numbers, int size)
{
	while (--size >= 0)
		numbers[size] = balls.value[size];
}
