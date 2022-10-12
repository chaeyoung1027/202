#include <iostream>

using namespace std;

class m_string
{
private:
    char* _Myptr;   //���� ���ڿ��� �����ּҸ� ��� �ִ� ������
    int _Mysize;   //���ڿ��� ���ڼ�

    
public:
    m_string();   //������
    m_string(const char* str);   //������
    m_string(const m_string& rhs);   //���� ������
    ~m_string();   //�Ҹ���
    m_string& operator=(const m_string& rhs);   //���� ������
    m_string operator+(const m_string& rhs);   //���� ������
    int operator==(const m_string& rhs);   //�� ������

    int size(void);   //���ڿ��� ���ڼ� ��ȯ
    const char* c_str(void);   //���ڿ��� �����ּ� ��ȯ

    friend ostream& operator<<(ostream& os, const m_string& ms)//private, public�� �־��� �� ��µǴ°� �Ȱ���
    {
        os << ms._Myptr;
        return os;
    }

};

m_string::m_string() {}

m_string::m_string(const char* str)
{
    //�Ϲ� ������ ȣ��
    _Mysize = strlen(str);
    _Myptr = new char[_Mysize+1];
    strcpy(_Myptr, str);
}

m_string::m_string(const m_string& rhs)
    : _Myptr(rhs._Myptr)
{
    //���� ������ ȣ��
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, rhs._Myptr);
}

m_string::~m_string()
{
    //�Ҹ��� ȣ��
    delete[] _Myptr;
}

m_string& m_string::operator=(const m_string& rhs)
{
    //���Կ����� ȣ��
    delete[] _Myptr;   //_Myptr ����
    _Mysize = strlen(rhs._Myptr) + 1;
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, rhs._Myptr);

    return *this;   //��ü ��ȯ
}

m_string m_string::operator+(const m_string& rhs)
{
    //���� ������ ȣ��
    char* str = new char[_Mysize + rhs._Mysize + 1];
    strcpy(str, _Myptr);
    strcat(str, rhs._Myptr);
    m_string temp(str);
    delete[]str;

    return temp;
}

int m_string::operator==(const m_string& rhs)
{
    //�� ������ ȣ��
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