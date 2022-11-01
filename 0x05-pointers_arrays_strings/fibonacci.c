#include <stdio.h>

int fibonacci(int i)
{
	
	if (i == 0)
	{
		return 0;
	}

	else if (i == 1)
	{
		return 1;
	}
	else 
	{
		return fibonacci(i - 1) + fibonacci(i - 2);
	}
}
	int main()
	{
		int i;

		for (i = 0; i < 10; i++)
			printf("%d\t\n", fibonacci(i));
		return 0;
	}
