#include <iostream>
using namespace std;

void jiyuk(void)
{
	//���������� �Լ� ȣ���� ������ �����(0���� �ʱ�ȭ�� ��Ŵ)
	int a = 0;
	cout << "�������� a�� " << a << endl;
	a++;
}

int main(void)
{
	jiyuk();   //0
	jiyuk();   //0
	jiyuk();   //0
}