#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal ����" << endl; }
	virtual ~Animal() { cout << "Animal �Ҹ�" << endl; }

	virtual void eat(void) = 0;
	virtual void roar(void) = 0;
	virtual void walk(void) = 0;

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger ����" << endl; }
	virtual ~Tiger() { cout << "Tiger �Ҹ�" << endl; }

	void eat(void) override { cout << "ȣ���� �Ծ�" << endl; }
	void roar(void) override { cout << "����" << endl; }
	void walk(void) override { cout << "�� �ɾ�" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog ����" << endl; }
	virtual ~Dog() { cout << "Dog �Ҹ�" << endl; }

	void eat(void) override { cout << "������ �Ծ�" << endl; }
	void roar(void) override { cout << "�۸�" << endl; }
	void walk(void) override { cout << "������ �ɾ�" << endl; }
};

void main(void)
{
	Animal* animal = new Tiger();
	animal->eat();
	delete animal;

}