/*#include <stdio.h>
int main()
{
	int *numPtr; // ������ ���� ����
	int num1 = 10; // int�� ������ �����ϰ� 10����
	numPtr = &num1;
	//num1�� �޸��ּҸ� ������ ������ ����
	printf("%p\n",numPtr);	
	// # 0033FAD4 �� ������ ���� numPtr �� ��
	printf("%p\n",&num1); 	
	// # 0033FAD4 �� ���� num1�� �޸� �ּ� ���
	// �� �ּҰ��� ��ǻ�͸� �����Ҷ����� �޶���
	long long *numPtr1; //long long �� = double
	float *numPtr2;
	char *cPtr1;

	long long num1 = 10; // 8����Ʈ
	float num2 = 3.5f;
	char c1 = 'a'; // 1����Ʈ

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1);
	printf("%f\n", *numPtr2);
	printf("%c\n", *cPtr1);

	int *numPtr; // ������ ���� ����
	int num1 = 10; // int�� ������ �����ϰ� 10����
	numPtr = &num1;
	//num1�� �޸��ּҸ� ������ ������ ����
	printf("%p\n", numPtr);
	// # 0033FAD4 �� ������ ���� numPtr �� ��
	printf("%p\n", &num1);
	// # 0033FAD4 �� ���� num1�� �޸� �ּ� ���
	// �� �ּҰ��� ��ǻ�͸� �����Ҷ����� �޶���
	return 0;
};*/