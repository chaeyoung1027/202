//cout, endl ��ü�� ������ ����.
#include<iostream>
//std �� �ᵵ �ȴ�.
using namespace std;

//pre �����Ϸ��� ó��
////�ڷ����� ������� ����
//#define jegop(A) ((A)*(A))


//�Լ� �̸��� ���� �Ű������� �ٸ���.(�Լ� �����ε�)

//default���� ä�� ������ �ڿ������� ä�����Ѵ�.
int jegop(int A, int B) {
	return A * A + B;
}

double jegop(double A, double B) {
	return A * A + B;
}

int jegop(int A) {
	return A * A;
}

double jegop(double A) {
	return A * A;
}

int main(void)
{
	cout << (4, 1) << endl;//17
	cout << (3.3, 1.1) << endl;//11.99
	cout << jegop(3 + 1) << endl;	//16
	cout << jegop(3.3) << endl;		//10.89

	return 0;
}