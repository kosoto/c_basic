/*
typedef �� struct Ű���� ���� ����ü �����ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS // strcpy ���Ȱ��� ���� ������ ���� ����		
#include <stdio.h>
#include <string.h> // strcpy �Լ��� ����� �������
typedef struct //��ϸӽ� ����ü
{
	int x;
	int y;

} Point; // typedef �� ����Ͽ� ����ü ��Ī�� Person���� ����

int main4()
{
	Point p1;	
	p1.x = 10;
	p1.y = 20;
	printf("%d %d \n", p1.x, p1.y);
	return 0;
}