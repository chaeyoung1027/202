//cout, endl ��ü�� ������ ����.
#include<iostream>
//std �� �ᵵ �ȴ�.
using namespace std;

//pre �����Ϸ��� ó��(�ڵ带 ġȯ����)
////�ڷ����� ������� ����
//#define jegop(A) ((A)*(A))

//���� �Լ��� ȣ����� ����
//�����Ϸ��� ó��(�ڵ带 ġȯ����)
//�ڷ����� ������ ����
//������� ������
//ª�� �ڵ�� inline���°� ����. �Լ� ȣ�� x
inline int jegop(int A)//����� ���� A�� ��.
{
	return A * A;
}

int main(void)
{
	cout << jegop(3 + 1) << endl;	//16
	cout << ((3+1) * (3+1)) << endl;		//16

	return 0;
}