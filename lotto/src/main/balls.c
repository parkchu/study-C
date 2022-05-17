#include <stdlib.h>
#include <time.h>
#include "balls.h"

balls	make_balls()
{
	int	number = 0;
	balls balls;

	while (number < 45)
	{
		balls.value[number] = number + 1;
		number++;
	}
	return balls;
}

int	*get_numbers(balls balls, int size)
{
	int	*numbers;

	numbers = malloc(sizeof(int) * size);
	while (--size >= 0)
		numbers[size] = balls.value[size];
	return numbers;
}

balls	shuffle(balls balls)
{
	int	index = 0;
	int	random_number;
	int	number;

	while (index < 45)
	{
		srand(time(NULL) * index);
		random_number = rand() % 45;
		number = balls.value[index];
		balls.value[index] = balls.value[random_number];
		balls.value[random_number] = number;
		index++;
	}
	return balls;
}
