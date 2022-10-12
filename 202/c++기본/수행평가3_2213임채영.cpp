#include <iostream>

using namespace std;

class m_string
{
private:
    char* _Myptr;   //실제 문자열의 시작주소를 담고 있는 포인터
    int _Mysize;   //문자열의 글자수

    
public:
    m_string();   //생성자
    m_string(const char* str);   //생성자
    m_string(const m_string& rhs);   //복사 생성자
    ~m_string();   //소멸자
    m_string& operator=(const m_string& rhs);   //대입 연산자
    m_string operator+(const m_string& rhs);   //덧셈 연산자
    int operator==(const m_string& rhs);   //비교 연산자

    int size(void);   //문자열의 글자수 반환
    const char* c_str(void);   //문자열의 시작주소 반환

    friend ostream& operator<<(ostream& os, const m_string& ms)//private, public에 넣었을 때 출력되는게 똑같다
    {
        os << ms._Myptr;
        return os;
    }

};

m_string::m_string() {}

m_string::m_string(const char* str)
{
    //일반 생성자 호출
    _Mysize = strlen(str);
    _Myptr = new char[_Mysize+1];
    strcpy(_Myptr, str);
}

m_string::m_string(const m_string& rhs)
    : _Myptr(rhs._Myptr)
{
    //복사 생성자 호출
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, rhs._Myptr);
}

m_string::~m_string()
{
    //소멸자 호출
    delete[] _Myptr;
}

m_string& m_string::operator=(const m_string& rhs)
{
    //대입연산자 호출
    delete[] _Myptr;   //_Myptr 제거
    _Mysize = strlen(rhs._Myptr) + 1;
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, rhs._Myptr);

    return *this;   //객체 반환
}

m_string m_string::operator+(const m_string& rhs)
{
    //덧셈 연산자 호출
    char* str = new char[_Mysize + rhs._Mysize + 1];
    strcpy(str, _Myptr);
    strcat(str, rhs._Myptr);
    m_string temp(str);
    delete[]str;

    return temp;
}

int m_string::operator==(const m_string& rhs)
{
    //비교 연산자 호출
    return strcmp(_Myptr, rhs._Myptr) ? -1 : 0;
}

int m_string::size(void)
{
    return _Mysize;
}

const char* m_string::c_str(void)
{
    return _Myptr;
}

int main(void)
{
    m_string str1 = "123";
    cout << str1 << " " << str1.size() << endl;

    m_string str2 = str1;
    cout << str2 << " " << str2.size() << endl;

    str2 = "m_string";
    cout << str2 << " " << str2.size() << endl;

    str2 = str2 + str1;
    cout << str2 << " " << str2.size() << endl;

    str2 = str2 + "ab";
    cout << str2 << " " << str2.size() << endl;

    cout << (str1 == "123") << endl;
    cout << (str1 == str2) << endl;

    return 0;
}