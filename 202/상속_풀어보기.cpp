#include<iostream>
#include<string.h>

using namespace std;

class Person
{
private:
	string name;
	int hakbun;

public:

	Person(void);
	Person(string name, int hakbun);

	PrintShow();

};

class Student : public Person
{
public:
	string university;

	Student(string, int, string);

private:
};


int main(void)
{
	Student stu = Student(1111, "JWP", "soft");
	hss.show();   // �θ�Ŭ������ ����Լ��� ȣ��(�ڽĿ� ���� X)

	return 0;
}
