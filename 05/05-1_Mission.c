#include <stdio.h>

int main(void)
{
	char answer;

	printf("������ �ֳ���? (y/n) : ");
	scanf("%c", &answer);

	if (answer == 'n')
		printf("�Ұ����� �ּ��� �ش�.\n");

	return 0;
}