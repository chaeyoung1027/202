#include <iostream>
#include <string>

using namespace std;

class DOG
{
private:
	string Color;
	string Name;

public:
	DOG(void);
	DOG(string color, string name);
	void show(void);
};

int main(void)
{
	DOG do1;
	do1.show();
	DOG do2 = DOG("골든리트리버.","황갈색");
	do2.show();

	return 0;
}

DOG::DOG(string name, string color)
	: Name(name),Color(color)
{
	cout << "강아지의 종은 " << name << "이고 색은 " << color << "입니다." << endl;
}