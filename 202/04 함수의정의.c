#include<stdio.h>

int sum(int a, int b); //�Լ��� ����(�Լ��� ���� �޸� ���� �Ҵ�)

int main(void) 
{
	printf("%d", sum(1, 2));
}

int sum(int a, int b)
{
	return a + b;
}
