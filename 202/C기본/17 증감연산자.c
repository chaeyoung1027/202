#include<stdio.h>

int main(void)
{
	int a, b, c = 0; // c 만 0
	a = ++c;		//c가 먼저 1증가, c:1, a:1
	b = c++;			//b에 c값을 먼저 대입하고 증가.b:!, c:2

	printf("%d, %d, %d", a, b, ++c);

	return 0;
}