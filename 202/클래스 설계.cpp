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
	DOG do2 = DOG("��縮Ʈ����.","Ȳ����");
	do2.show();

	return 0;
}

DOG::DOG(string name, string color)
	: Name(name),Color(color)
{
	cout << "�������� ���� " << name << "�̰� ���� " << color << "�Դϴ�." << endl;
}