#include<iostream>//cout, endl ��ü�� ������ ����.
#include<stdio.h>//printf()�� ������ ����

#include<string>//string Ŭ������ ������ ����
#include<string.h>//strcpy()�� ������ ����


//std �� �ᵵ �ȴ�.
using namespace std;

int main(void)
{
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d\n", strcmp(cI, cJ) == 0);	//���� ���� ���ٸ� true�� 1�� ���´�.
	printf("%d\n", strcmp(cI, cK) < 0);		///cK�� �� ũ�� ������ 1�� ���´�. ����������!

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";	//���� #include<string>�� ����Ѵ�.
	cout << (cppI == cppJ) << endl;						//���� ���� ������ 1 ���
	cout << (cppI < cppK) << endl;						

	return 0;
}