#define _CRT_SECURE_NO_WARNINGS // strcpy ���Ȱ��� ���� ������ ���� ����		
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
typedef enum _Month
{
	Jan = 1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec,
	MonthCount 
	// ���������� Jan = 1 ���� �������� �ڵ� �ε��� �Ҵ�
} Month; 

int main8()
{
	for (Month i = Jan; i < MonthCount; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}