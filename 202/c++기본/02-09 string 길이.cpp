#include<iostream>//cout, endl ��ü�� ������ ����.
#include<stdio.h>//printf()�� ������ ����

#include<string>//string Ŭ������ ������ ����
#include<string.h>//strcpy()�� ������ ����


//std �� �ᵵ �ȴ�.
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));

	string cppI = "aaa";
	cout << cppI.size() << endl;//3
	cout << cppI.length() << endl;//3
	//size�� length ��� ���ڿ��� ���̸� �� �� ����.

	return 0;
}