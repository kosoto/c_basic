#define _CRT_SECURE_NO_WARNINGS // strcpy ���Ȱ��� ���� ������ ���� ����		
#include <stdio.h>
#include <string.h> // strcpy �Լ��� ����� �������
struct Point//��ϸӽ� ����ü
{
	int x;
	int y;

}; // typedef �� ����Ͽ� ����ü ��Ī�� Person���� ����

int main6()
{
	struct Point p[3];
	//ũ�Ⱑ 3�� ����ü �迭 ����
	p[0].x = 10;
	p[0].y = 20;
	p[1].x = 30;
	p[1].y = 40;
	p[2].x = 50;
	p[2].y = 60;

	printf("%d %d \n", p[0].x, p[0].y);
	printf("%d %d \n", p[1].x, p[1].y);
	printf("%d %d \n", p[2].x, p[2].y);
	

	return 0;
}