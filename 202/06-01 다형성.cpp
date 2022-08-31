#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat(void) { cout << "�����Ծ�" << endl; }
	//roar�Լ��� �����Լ����̺��� ���(���� ���ε�)
	virtual void roar(void) { cout << "����¢��" << endl; }
	void walk(void) { cout << "�����ɾ�" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) { cout << "�۸�" << endl; }
};

void main(void)
{
	Animal* animal = new Animal;
	animal->roar();   //����¢��
	delete animal;

	Tiger* tiger = new Tiger;
	tiger->roar();   //����
	delete tiger;

	Dog* dog = new Dog;
	dog->roar();      //�۸�
	delete dog;
}