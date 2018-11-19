#define _CRT_SECURE_NO_WARNINGS // strcpy 보안경고로 인한 컴파일 에러 방지		
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
	// 내부적으로 Jan = 1 이후 나머지는 자동 인덱스 할당
} Month; 

int main8()
{
	for (Month i = Jan; i < MonthCount; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}