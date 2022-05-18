//cout, endl 객체를 가지고 있음
#include <iostream>
#include <string.h>

using namespace std;

class Student {
	//private:
public:
	int nHakbun;
	//string sName;
	char* sName;
	Student(int Hakbun, const char* name);

	//소멸자 : 객체가 메모리에서 해제될 때 호출되는 함수
	~Student();
	void show(void);
};

int main(void) {
	Student stu1 = Student(1111, "JWP");
	stu1.show();

	return 0;
}
//Student::Student(int Hakbun, string name) {
//   this->nHakbun = Hakbun;
//   this->sName = name;
//   cout << "학번이 등록 되었습니다." << endl;
//}

Student::Student(int Hakbun, const char* name)
//객체 생성과 동시에 맴버변수 초기화   //멤버 변수(매개변수)
//const/참조형 멤버변수를 사용할 수 있다.
	:nHakbun(Hakbun)
{
	cout << "일반 생성자 호출" << endl;
	int len = strlen(name) + 1;      //공간개수 측정
	sName = new char[len];         //공간생성
	strcpy(sName, name);            //매개변수에 있는 문자열 복사
}

Student::~Student() {
	delete[]sName;
	cout << "소멸자 호출" << endl;
}

void Student::show(void) {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}