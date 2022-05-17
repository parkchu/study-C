char	contains_number(int size, int *numbers, int number)
{
	char	status = 0;
	int		index = 0;

	while (index < size && !status)
	{
		status = (numbers[index] == number);
		index++;
	}
	return status;
}
