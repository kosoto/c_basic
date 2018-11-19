/*
포인터 연산
*/
#include <stdio.h>

int main9()
{
	int arr[5] = { 11,22,33,44,55 };
	int *arrPtr;

	arrPtr = arr;
	//배열 첫번째 요소의 주소를 포인터에 저장

	printf("%d\n", *(arrPtr+1));
	//22 : arrPtr 에서 순방향으로 4바이트 만큼 떨어진 메모리 주소에 접근. arr[1]과 같음
	printf("%d\n", *(arrPtr + 2));
	//33 : arrPtr 에서 순방향으로 8바이트 만큼 떨어진 메모리 주소에 접근. arr[2]와 같음
	return 0;
}