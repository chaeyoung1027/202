#include<stdio.h>

int sum(int a, int b); //함수의 선언(함수에 대한 메모리 공간 할당)

int main(void) 
{
	printf("%d", sum(1, 2));
}

int sum(int a, int b)
{
	return a + b;
}
