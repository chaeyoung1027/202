#include<iostream>//cout, endl 객체를 가지고 있음.
#include<stdio.h>//printf()를 가지도 있음

#include<string>//string 클래스를 가지고 있음
#include<string.h>//strcpy()를 가지고 있음


//std 안 써도 된다.
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%s\n", cI);				//문자열의 시작주소

	string cppl = "aaa";
	printf("%s \n", cppl.c_str());	//문자열의 시작주소


	return 0;
}