#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

    //ũ�� Ȯ���� ������ �����迭
    vector<string> s3;
    s3.reserve(10);   //ũ�⸦ 10���� Ȯ��

    for (int i = 0; i < 10; i++) {
        s3.push_back("ab");
    }

    //���� �������� ũ�⸦ Ȯ���Ͽ� ����
    s3.push_back("ab");

    vector<string>::iterator iter;

    //������ ���ҵ��� ���(iterator)
    for (iter = s3.begin(); iter != s3.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    s3[0] = "cd";
    s3.at(2) = "ef";

    for (iter = s3.begin(); iter != s3.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}