#include<stdio.h>

int main(void)
{
	int a, b, c = 0; // c �� 0
	a = ++c;		//c�� ���� 1����, c:1, a:1
	b = c++;			//b�� c���� ���� �����ϰ� ����.b:!, c:2

	printf("%d, %d, %d", a, b, ++c);

	return 0;
}