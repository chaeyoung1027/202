#include<iostream>
#include<string>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public :
	//������ �ۼ�
	CBank(string name, string account, int balance) {
		this->name = name;
		this->account = account;
		this->balance = balance;
	}

	//�ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
	void pt_mo(int amount) {

		cout << "�ݾ��� " << amount << "�Դϴ�." << endl;
		balance += amount;
	}
};

int main() {

	return 0;
}

