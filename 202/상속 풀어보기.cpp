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
        cout << "HighSchoolStudent 일반 생성자 호출" << endl;
    }
    void show(void);

    //소멸자
    ~Student()
    {
        cout << "Student 소멸자 호출" << endl;
    }

private:
    string university;
};

int main(void)
{
    Student stu = Student("채영", 1111, "~~");
    stu.show();

    return 0;
}

void Person::show()
{
    cout << "학번은 " << hakbun << "입니다." << endl;
    cout << "이름은 " << name << "입니다." << endl << endl;
}