#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %p\n", &a);
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	return 0;
}