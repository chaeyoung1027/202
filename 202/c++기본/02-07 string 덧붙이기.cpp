#include<iostream>//cout, endl 객체를 가지고 있음.
#include<stdio.h>//printf()를 가지도 있음

#include<string>//string 클래스를 가지고 있음
#include<string.h>//strcpy()를 가지고 있음


//std 안 써도 된다.
using namespace std;

int main(void)
{
	//c스타일
	char cMunja[20];
	strcpy(cMunja, "c_insert");	//cMunja에 c_insert를 넣는 함수
	strcat(cMunja, "++");		//c_insert 뒤에 ++을 덧붙이는 함수
	printf("%s \n", cMunja);

	//cpp 스타일
	std::string cppMunja;
	cppMunja = "cpp_insert";
	cppMunja += "++";
	cout << cppMunja << endl;

	return 0;
}