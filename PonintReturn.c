/*
포인터 반환
*/
#include <stdio.h>
int *ten()
{
	int num1 = 10;
	//num1 은 함수 ten 이 끝나면 사라짐
	return &num1;
	//함수에서 지역변수의 주소를 반환하는 것은 잘못된 방법
}


int main()
{
	int *numPtr;
	numPtr = ten();
	printf("%d\n", *numPtr);
	//값이 나오긴 하지만 이미 사라진 변수를 출력하고 있음
	return 0;
}