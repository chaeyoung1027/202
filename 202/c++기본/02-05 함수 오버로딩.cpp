//cout, endl ��ü�� ������ ����.
#include<iostream>
//std �� �ᵵ �ȴ�.
using namespace std;

//pre �����Ϸ��� ó��
////�ڷ����� ������� ����
//#define jegop(A) ((A)*(A))


//�Լ� �̸��� ���� �Ű������� �ٸ���.
int jegop(int A) {
	return A * A;
}

double jegop(double A) {
	return A * A;
}

int main(void)
{
	cout << jegop(3 + 1) << endl;	//16
	cout << jegop(3.3) << endl;		//16

	return 0;
}