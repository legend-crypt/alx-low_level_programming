/**
 * _isdigit - check if a variable is a number
 * @c: the variable to be checked
 * Return: 1 if success, otherwise 0
 */
int _isdigit(int c)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
