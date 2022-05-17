void	move_back(int *numbers, int start_index, int end_index)
{
	while (end_index > start_index)
	{
		numbers[end_index] = numbers[end_index - 1];
		end_index--;
	}
}

void	add_front(int *numbers, int source_index, int target_index)
{
	int	number;

	number = numbers[source_index];
	if (source_index == target_index)
	{
		return ;
	}
	if (number <= numbers[target_index])
	{
		move_back(numbers, target_index, source_index);
		numbers[target_index] = number;
	}
	if (number > numbers[target_index])
	{
		add_front(numbers, source_index, target_index + 1);
	}
}

void	sort(int *numbers, int size)
{
	int	index = 0;

	while (index < size)
	{
		add_front(numbers, index, 0);
		index++;
	}
}
