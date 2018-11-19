/*
typedef 로 struct 키워드 없이 구조체 선언하기
*/
#define _CRT_SECURE_NO_WARNINGS // strcpy 보안경고로 인한 컴파일 에러 방지		
#include <stdio.h>
#include <string.h> // strcpy 함수가 선언된 헤더파일
typedef struct //어나니머스 구조체
{
	int x;
	int y;

} Point; // typedef 를 사용하여 구조체 별칭을 Person으로 정의

int main4()
{
	Point p1;	
	p1.x = 10;
	p1.y = 20;
	printf("%d %d \n", p1.x, p1.y);
	return 0;
}