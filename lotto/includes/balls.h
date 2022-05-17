#ifndef BALLS_H
#define BALLS_H

typedef struct s_balls
{
	int value[45];
} balls;

void	init(balls *balls);

void	get_numbers(balls balls, int *numbers, int size);
#endif
