#include <stdio.h>

int main(void)
{
	char str[80];
	int i, cnt =0;

	printf("���� �Է� : ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 'a' - 'A';
			cnt++;
		}
	}

	printf("�ٲ� ���� : ");
	puts(str);

	printf("�ٲ� ���� �� : %d", cnt);

	return 0;
}