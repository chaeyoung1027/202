#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:

	//생성자 : 객체가 생성될 때, 호출되는 함수
	Student(void);
	void show(void);
};

int main(void)
{

	Student stu1;
	stu1.show();
	Student stu2 = Student();
	stu2.show();

	return 0;
}


Student::Student(void) {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show(void) {
	nHakbun = 1234;
	cout << "학번은" << nHakbun << "입니다." << endl;
	cout << "이름은" << sName << "입니다." << endl << endl;
}