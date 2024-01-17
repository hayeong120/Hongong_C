#include <stdio.h>

int main(void)
{
	char answer;

	printf("애인이 있나요? (y/n) : ");
	scanf("%c", &answer);

	if (answer == 'n')
		printf("소개팅을 주선해 준다.\n");

	return 0;
}