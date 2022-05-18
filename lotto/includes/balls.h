#ifndef BALLS_H
#define BALLS_H

typedef struct s_balls
{
	int value[45];
} balls;

balls	make_balls();

int	*get_numbers(balls balls, int size);

balls	shuffle(balls balls, int seed);

#endif
