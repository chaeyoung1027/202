#include <iostream>	// cout, endl 사용
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	// 생성자 : 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고있지 않는다
	Student();
	Student(int Hakbun, string Name);

	void show();

};

Student::Student()
{
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

// 멤버변수를 초기화 할 수 있으며 따라서,
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, string Name)
	: nHakbun(Hakbun), sName(Name)	// 멤버변수(매개변수)
{
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}

int main(void)
{
	Student* stu = new Student[6];
	for (int i = 0; i < 6; i++)
		//배열이므로 ->를 쓰지 않고, .으로 멤버접근
		stu[i].show();
	
	delete[]stu;

	return 0;
}