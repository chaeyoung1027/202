#include<iostream>
#include <string>

using namespace std;

class PB
{
public:
	PB() {}
	PB(string name, int heart, int attack, int defense):Cname(name),Cheart(heart),Cattack(attack),Cdefense(defense){}
	
private:
	string Cname;
	int Cheart;
	int Cattack;
	int Cdefense;
};

int power(int pheart, int pattack, int pdefense) {
	cout << pattack << "��ŭ ���ݹ޾ҽ��ϴ�." << endl;
	cout << pdefense << "��ŭ ����߽��ϴ�." << endl;
	pheart = pheart - pattack+pdefense;
	
	return pheart;
}

int main(void) {
	PB pb1 = { "ä��", 100, 2, 1 };

}