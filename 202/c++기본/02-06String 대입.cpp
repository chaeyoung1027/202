#include<iostream>//cout, endl ��ü�� ������ ����.
#include<stdio.h>//printf()�� ������ ����

#include<string>//string Ŭ������ ������ ����
#include<string.h>//strcpy()�� ������ ����


//std �� �ᵵ �ȴ�.
using namespace std;

int main(void)
{
	//c��Ÿ��
	char cMunja[20];
	strcpy(cMunja, "c_insert");	//cMunja�� c_insert�� �ִ� �Լ�
	printf("%s \n", cMunja);

	//cpp ��Ÿ��
	std::string cppMunja;
	cppMunja = "cpp_insert";
	cout << cppMunja << endl;

	return 0;
}