#include<iostream>//cout, endl 객체를 가지고 있음.
#include<stdio.h>//printf()를 가지도 있음

#include<string>//string 클래스를 가지고 있음
#include<string.h>//strcpy()를 가지고 있음


//std 안 써도 된다.
using namespace std;

int main(void)
{
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d\n", strcmp(cI, cJ) == 0);	//둘의 값이 같다면 true인 1이 나온다.
	printf("%d\n", strcmp(cI, cK) < 0);		///cK가 더 크기 때문에 1이 나온다. 사전순으로!

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";	//원래 #include<string>을 써야한다.
	cout << (cppI == cppJ) << endl;						//값이 같기 때문에 1 출력
	cout << (cppI < cppK) << endl;						

	return 0;
}