#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	ir(a > 10)
	{
		b = a;
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}