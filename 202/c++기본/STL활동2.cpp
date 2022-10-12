/*������ ����(3������)
������ ��ü ���
������ ������ �� 1�� ����
������ ��ü ���*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
    //map<key �ڷ���, value �ڷ���>
    map<string, string> m;
    m["�����"] = "170";
    m["������"] = "184";
    m["������"] = "176";
    m["������"] = "182";

    map<string, string> ::iterator iter;

    //������ ���ҵ��� ���(iterator)
    //������ ������ key�� �ڵ�����
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << (*iter).first << "�� Ű��" << (*iter).second << "cm�̴�." << endl;    //iter: ������ x �����͸� ����Ű�� ��
        cout << iter->first << "�� Ű��" << iter->second << "cm�̴�." << endl;
    }
    cout << endl;

    map<string, string> ::iterator actor = m.find("���");

    cout << "�����" << m["170"] << endl;
    cout << "������" << m["184"] << endl;
    cout << "������" << m["176"] << endl;
    cout << "������" << m["182"] << endl;

    return 0;
}