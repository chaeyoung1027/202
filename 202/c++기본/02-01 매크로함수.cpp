//cout, endl ��ü�� ������ ����.
#include<iostream>
//std �� �ᵵ �ȴ�.
using namespace std;

//pre �����Ϸ��� ó��
//�ڷ����� ������� ����
#define jegop(A) ((A)*(A))

int main(void)
{
	cout << jegop(3 + 1) << endl;	//16
	cout << ((3+1) * (3+1)) << endl;		//16

	return 0;
}