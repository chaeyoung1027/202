//cout, endl 객체를 가지고 있음.
#include<iostream>
//std 안 써도 된다.
using namespace std;

//pre 컴파일러가 처리(코드를 치환해줌)
////자료형에 영향받지 않음
//#define jegop(A) ((A)*(A))

//실제 함수가 호출되지 않음
//컴파일러가 처리(코드를 치환해줌)
//자료형의 영향을 받음
//디버깅이 수월함
//짧은 코드는 inline쓰는게 낫다. 함수 호출 x
inline int jegop(int A)//계산한 값이 A가 됨.
{
	return A * A;
}

int main(void)
{
	cout << jegop(3 + 1) << endl;	//16
	cout << ((3+1) * (3+1)) << endl;		//16

	return 0;
}