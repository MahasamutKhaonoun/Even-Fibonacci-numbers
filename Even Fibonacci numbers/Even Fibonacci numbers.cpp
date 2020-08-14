#include<stdio.h>

int main() 
{
	int a, b, c, sum;
	a = b = c = 1;
	sum = 0;
	for (;c <= 4000000;) 
	{
		if (c % 2 == 0)
		{
			sum += c;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d ", sum);
	return 0;
}