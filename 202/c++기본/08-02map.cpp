#include <iostream>
#include <string>
#include <map>

using namespace std;

//���: ����
//����Ź: �����
//���»���: �̵���
//���: ���γ�

//arr["���"] = "����"
//arr["���»���"] = "�̵���"

int main(void) {
    //map<key �ڷ���, value �ڷ���>
    map<string, string> m;
    m["���"] = "����";
    m["���»���"] = "�̵���";
    m["����Ź"] = "�����";
    m["���"] = "���γ�";

    //������ ���ҵ��� ���(iterator)
    //������ ������ key�� �ڵ�����
    for (auto x : m) {
        cout << x.first << "��" << x.second << "��" << endl;
    }
    cout << endl;

    cout << "��ſ�" << m["���"] << endl;
    cout << "���»��ڿ�" << m["���»���"] << endl;
    cout << "����Ź��" << m["����Ź"] << endl;
    cout << "��Ͽ�" << m["���γ�"] << endl;

    return 0;
}