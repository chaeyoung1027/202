//cout, endl ��ü�� ������ ����.
#include<iostream>
//std �� �ᵵ �ȴ�.
using namespace std;

//pre �����Ϸ��� ó��
////�ڷ����� ������� ����
//#define jegop(A) ((A)*(A))


//�Լ� �̸��� ���� �Ű������� �ٸ���.(�Լ� �����ε�)

//default���� ä�� ������ �ڿ������� ä�����Ѵ�.
int jegop(int A, int B = 1) {
	return A * A + B;
}

double jegop(double A, double B = 1.1) {
	return A * A + B;
}

int main(void)
{
	cout << jegop(4) << endl;	//jegop(4, 1) : 17
	cout << jegop(3.3) << endl;	//jegop(3.3, 1.1) : 11.99

	return 0;
}