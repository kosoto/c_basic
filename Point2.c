#define _CRT_SECURE_NO_WARNINGS // strcpy 보안경고로 인한 컴파일 에러 방지		
#include <stdio.h>
#include <string.h> // strcpy 함수가 선언된 헤더파일
struct Point//어나니머스 구조체
{
	int x;
	int y;

}; // typedef 를 사용하여 구조체 별칭을 Person으로 정의

int main6()
{
	struct Point p[3];
	//크기가 3인 구조체 배열 생성
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