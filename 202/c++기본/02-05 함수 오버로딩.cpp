//cout, endl 객체를 가지고 있음.
#include<iostream>
//std 안 써도 된다.
using namespace std;

//pre 컴파일러가 처리
////자료형에 영향받지 않음
//#define jegop(A) ((A)*(A))


//함수 이름은 같고 매개변수는 다르다.
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