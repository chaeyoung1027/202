#include<iostream>
#include <string>

using namespace std;

class PB
{
public:
	PB() {}
	PB(string name, int heart, int attack, int defense)
		:Cname(name),Cheart(heart),Cattack(attack),Cdefense(defense){
		cout << Cattack << "만큼 공격받았습니다." << endl;
		cout << Cdefense << "만큼 방어했습니다." << endl;
		Cheart = Cheart - Cattack + Cdefense;
	}
	void print() {
		cout << "현재 "<<Cname<<"의 체력은 "<<Cheart<<"남았습니다." << endl;
	}
	
private:
	string Cname;
	int Cheart;
	int Cattack;
	int Cdefense;
};

int main(void) {
	PB pb1 = { "채영", 100, 2, 1 };
	pb1.print();
}