#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "balls.h"

int	main(void)
{
	int		index = 0;
	balls	balls = make_balls();

	balls = shuffle(balls);
	while (index < 45)
	{
		printf("number: %d\n", balls.value[index]);
		index++;
	}
}

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

balls	shuffle(balls balls)
{
	int	index = 0;
	int	random_number;
	int	number;

	srand(time(NULL));
	while (index < 45)
	{
		random_number = rand() % 45;
		number = balls.value[index];
		balls.value[index] = balls.value[random_number];
		balls.value[random_number] = number;
		index++;
	}
	return balls;
}
