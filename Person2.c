/*
구조체 포인터 선언하고 메모리 할당하기
*/
#define _CRT_SECURE_NO_WARNINGS // strcpy 보안경고로 인한 컴파일 에러 방지		
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
	// struct를 사용할 경우 어나니머스 구조체는 사용 불가
	//구조체 포인터 선언
	//메모리 할당
	strcpy(p1 -> name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울 강남");
	//화살표 연산자로 구조체 멤버에 접근하여 값 할당
	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("주소 : %s\n", p1->address);
	free(p1); //동적 메모리 해제
	return 0;
};

/*
구조체의 멤버에 접근시 (.)닷을 이용함
구조체의 포인터에 멤버에 접근할 때는 -> 를 사용함
*/