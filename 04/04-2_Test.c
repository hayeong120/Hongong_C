#include <stdio.h>

int main(void)
{
	double weight, height, BMI;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf%lf", &weight, &height);

	height = height / 100.0;
	BMI = weight / (height * height);

	printf("%s\n", (BMI >= 20.0) && (BMI < 25.0) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;
}