#include <iostream>
using namespace std;

void jiyuk(void)
{
	//���� ���������� ����Ǵ� �������� ��� ����
	static int a = 0; //����(����)����
	cout << "�������� a�� " << a << endl;
	a++;
}

int main(void)
{
	jiyuk();   //0
	jiyuk();   //1
	jiyuk();   //2
}