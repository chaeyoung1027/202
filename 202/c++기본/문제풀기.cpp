#include<iostream>
#include <string>

using namespace std;

class PB
{
public:
	PB() {}
	PB(string name, int heart, int attack, int defense)
		:Cname(name),Cheart(heart),Cattack(attack),Cdefense(defense){
		cout << Cattack << "��ŭ ���ݹ޾ҽ��ϴ�." << endl;
		cout << Cdefense << "��ŭ ����߽��ϴ�." << endl;
		Cheart = Cheart - Cattack + Cdefense;
	}
	void print() {
		cout << "���� "<<Cname<<"�� ü���� "<<Cheart<<"���ҽ��ϴ�." << endl;
	}
	
private:
	string Cname;
	int Cheart;
	int Cattack;
	int Cdefense;
};

int main(void) {
	PB pb1 = { "ä��", 100, 2, 1 };
	pb1.print();
}