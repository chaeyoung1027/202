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
    Person(int Hakbun, string name);
    
    int printshow(void);
    void show(void);

};
class Student :public Person {
public:
    Student(string name, int hakbun, string University)
        : Person(hakbun, name), university(University)
    {
        cout << "HighSchoolStudent �Ϲ� ������ ȣ��" << endl;
    }
    void show(void);

    //�Ҹ���
    ~Student()
    {
        cout << "Student �Ҹ��� ȣ��" << endl;
    }

private:
    string university;
};

int main(void)
{
    Student stu = Student("ä��", 1111, "~~");
    stu.show();

    return 0;
}

void Person::show()
{
    cout << "�й��� " << hakbun << "�Դϴ�." << endl;
    cout << "�̸��� " << name << "�Դϴ�." << endl << endl;
}