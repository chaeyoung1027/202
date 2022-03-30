#include <iostream>
using namespace std;

void jiyuk(void)
{
	//정적 지역변수는 선언되는 순간부터 계속 유지
	static int a = 0; //정적(지역)변수
	cout << "정적변수 a는 " << a << endl;
	a++;
}

int main(void)
{
	jiyuk();   //0
	jiyuk();   //1
	jiyuk();   //2
}