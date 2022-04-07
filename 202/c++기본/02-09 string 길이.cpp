#include<iostream>//cout, endl 객체를 가지고 있음.
#include<stdio.h>//printf()를 가지도 있음

#include<string>//string 클래스를 가지고 있음
#include<string.h>//strcpy()를 가지고 있음


//std 안 써도 된다.
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));

	string cppI = "aaa";
	cout << cppI.size() << endl;//3
	cout << cppI.length() << endl;//3
	//size와 length 모두 문자열의 길이를 알 수 있음.

	return 0;
}