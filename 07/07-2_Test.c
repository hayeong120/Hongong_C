#include <stdio.h>

int rec_func(int n);

int main(void)
{
	printf("%d\n", rec_func(10));

	return 0;
}

int rec_func(int n)
{
	int res;
	
	if (n == 1)
		return 1;
	else
		res = n + rec_func(n - 1);

	return res;
}