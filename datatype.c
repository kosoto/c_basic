
#define _CRT_SECURE_NO_WARNINGS // strcpy ���Ȱ��� ���� ������ ���� ����		
#include <stdio.h>
#include <string.h> // strcpy �Լ��� ����� �������
struct Person
{
	char name[20];
	int age;
	char address[100];

};

int main2()
{
	struct Person p1; //����ü ���� ����
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