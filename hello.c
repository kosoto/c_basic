/*#include <stdio.h>
int main()
{
	int *numPtr; // 포인터 변수 선언
	int num1 = 10; // int형 변수를 선언하고 10저장
	numPtr = &num1;
	//num1의 메모리주소를 포인터 변수에 저장
	printf("%p\n",numPtr);	
	// # 0033FAD4 는 포인터 변수 numPtr 의 값
	printf("%p\n",&num1); 	
	// # 0033FAD4 는 변수 num1의 메모리 주소 출력
	// 두 주소값은 컴퓨터를 실행할때마다 달라짐
	long long *numPtr1; //long long 형 = double
	float *numPtr2;
	char *cPtr1;

	long long num1 = 10; // 8바이트
	float num2 = 3.5f;
	char c1 = 'a'; // 1바이트

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1);
	printf("%f\n", *numPtr2);
	printf("%c\n", *cPtr1);

	int *numPtr; // 포인터 변수 선언
	int num1 = 10; // int형 변수를 선언하고 10저장
	numPtr = &num1;
	//num1의 메모리주소를 포인터 변수에 저장
	printf("%p\n", numPtr);
	// # 0033FAD4 는 포인터 변수 numPtr 의 값
	printf("%p\n", &num1);
	// # 0033FAD4 는 변수 num1의 메모리 주소 출력
	// 두 주소값은 컴퓨터를 실행할때마다 달라짐
	return 0;
};*/