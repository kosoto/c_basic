/*
������ ��ȯ
*/
#include <stdio.h>
int *ten()
{
	int num1 = 10;
	//num1 �� �Լ� ten �� ������ �����
	return &num1;
	//�Լ����� ���������� �ּҸ� ��ȯ�ϴ� ���� �߸��� ���
}


int main()
{
	int *numPtr;
	numPtr = ten();
	printf("%d\n", *numPtr);
	//���� ������ ������ �̹� ����� ������ ����ϰ� ����
	return 0;
}