#include <stdio.h>

int main(void)
{
	int seats = 70;			// ������� �¼� ��(Seats) �ʱ�ȭ
	int audience = 65;		// ���尴 ��(audience) �ʱ�ȭ
	double rate;			// �����(rate)�� ������ ����
	  
	rate = (double)audience / (double)seats * 100.0;
	// 'audience / seats'�� �ٷ� �����ϸ� �� �� int���̹Ƿ� ���� ����Ѵ�.
	// �� ��� ���尴 ���� �¼� ������ ũ�� �����Ƿ� �׻� 0�� ��µȴ�.
	// ���� �Ҽ������� ����� �� �ֵ��� double������ �� ��ȯ�Ѵ�.
	// ������(/)�� ���ϱ�(*)�� �켱������ �����Ƿ� ���� ���⿡ ���� ���ʺ��� 
	// ������ ������ ���� ����ȴ�.
		
	printf("����� : %.1lf%%\n", rate);		// ����� ���

	return 0;
}