/*
typedef �� struct Ű���� ���� ����ü �����ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS // strcpy ���Ȱ��� ���� ������ ���� ����		
#include <stdio.h>
#include <string.h> // strcpy �Լ��� ����� �������
typedef struct //��ϸӽ� ����ü
{
	char name[20];
	int age;
	char address[100];

} Person; // typedef �� ����Ͽ� ����ü ��Ī�� Person���� ����

int main1()
{
	Person p1;
	strcpy(p1.name, "ȫ�浿");
	//������ ����ü ����� �����Ͽ� �� �Ҵ�
	p1.age = 30;
	strcpy(p1.address, "����� ��걸");
	//������ ����ü ����� �����Ͽ� �� ���
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("�ּ� : %s\n", p1.address);
	return 0;
}