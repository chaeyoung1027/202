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
    
    map<string, string> ::iterator iter;

    //������ ���ҵ��� ���(iterator)
    //������ ������ key�� �ڵ�����
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << (*iter).first << "��"<<(*iter).second<<"��"<<endl;    //iter: ������ x �����͸� ����Ű�� ��
        cout << iter->first << "��" << iter->second << "��" << endl;
    }
    cout << endl;

    map<string, string> ::iterator actor = m.find("���");

    cout << "��ſ�" << m["���"] << endl;
    cout << "���»��ڿ�" << m["���»���"] << endl;
    cout << "����Ź��" << m["����Ź"] << endl;
    cout << "��Ͽ�" << m["���γ�"] << endl;

    return 0;
}