/*
������ ����
*/
#include <stdio.h>

int main9()
{
	int arr[5] = { 11,22,33,44,55 };
	int *arrPtr;

	arrPtr = arr;
	//�迭 ù��° ����� �ּҸ� �����Ϳ� ����

	printf("%d\n", *(arrPtr+1));
	//22 : arrPtr ���� ���������� 4����Ʈ ��ŭ ������ �޸� �ּҿ� ����. arr[1]�� ����
	printf("%d\n", *(arrPtr + 2));
	//33 : arrPtr ���� ���������� 8����Ʈ ��ŭ ������ �޸� �ּҿ� ����. arr[2]�� ����
	return 0;
}