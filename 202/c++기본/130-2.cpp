#include<iostream>
#include<string>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public :
	//생성자 작성
	CBank(string name, string account, int balance) {
		this->name = name;
		this->account = account;
		this->balance = balance;
	}

	//입금되는 금액을 출력하는 함수 작성
	void pt_mo(int amount) {

		cout << "금액은 " << amount << "입니다." << endl;
		balance += amount;
	}
};

int main() {

	return 0;
}

