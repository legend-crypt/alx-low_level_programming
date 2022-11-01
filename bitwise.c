#include <stdio.h>

void set(int num, int pos)
{
	num |= (1 << pos);
	printf("%d\n",num);
}
int main(void)
{
	int num = 4;
	int pos = 1;
	set(num,pos);
	return (0);
	
}
