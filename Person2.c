/*
����ü ������ �����ϰ� �޸� �Ҵ��ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS // strcpy ���Ȱ��� ���� ������ ���� ����		
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Person
{
	char name[20];
	int age;
	char address[100];
}; 

int main5()
{
	struct Person *p1 = malloc(sizeof(struct Person));
	// struct�� ����� ��� ��ϸӽ� ����ü�� ��� �Ұ�
	//����ü ������ ����
	//�޸� �Ҵ�
	strcpy(p1 -> name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "���� ����");
	//ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� �Ҵ�
	printf("�̸� : %s\n", p1->name);
	printf("���� : %d\n", p1->age);
	printf("�ּ� : %s\n", p1->address);
	free(p1); //���� �޸� ����
	return 0;
};

/*
����ü�� ����� ���ٽ� (.)���� �̿���
����ü�� �����Ϳ� ����� ������ ���� -> �� �����
*/