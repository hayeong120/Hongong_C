#include <stdio.h>

int main(void)
{
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tFriend\n");
	printf("Goot\bd\tchance\n");
	// "Goot"�� ����ϰ� �� ĭ �������� �̵�(\b)�� t�� d�� �ٲ۴�.
	printf("Cow\rW\a\n");
	// �� ������ �̵�(\r)�� C�� W�� �ٲٰ� ���Ҹ�(\a)�� ���� ���� �ٲ�(\n)

	return 0;
}