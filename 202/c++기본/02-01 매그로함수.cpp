//cout, endl ��ü�� ������ ����.
#include<iostream>
//std �� �ᵵ �ȴ�.
using namespace std;

//pre �����Ϸ��� ó��
//�ڷ����� ������� ����
#define jegop(A) A*A

int main(void)
{
	//������ �켱���� ������ �ǵ�ġ ���� ����� ����
	cout << jegop(3 + 1) << endl;	//7
	cout << 3+1 * 3+1 << endl;		//7

	return 0;
}