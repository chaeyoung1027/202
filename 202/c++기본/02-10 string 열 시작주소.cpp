#include<iostream>//cout, endl ��ü�� ������ ����.
#include<stdio.h>//printf()�� ������ ����

#include<string>//string Ŭ������ ������ ����
#include<string.h>//strcpy()�� ������ ����


//std �� �ᵵ �ȴ�.
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%s\n", cI);				//���ڿ��� �����ּ�

	string cppl = "aaa";
	printf("%s \n", cppl.c_str());	//���ڿ��� �����ּ�


	return 0;
}