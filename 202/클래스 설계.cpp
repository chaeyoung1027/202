#include <string>
using namespace std;

class animal
{
public:
	void �Դ�();
	void �޸���();

private:
};

class DOG : public animal
{
public:
	void ¢��();

private:
	string size;
	string Species;
};

class Golden : public DOG
{
public:
	void ����();//�����
	void ����ϴ�();
	void ���ϴ�();
	void Ȱ������();

private:
	string color;
	string age;
};

class chihuahua : public DOG
{
public:
	void ��ī�Ӵ�();//����
	void ���̾���();
	void �밨�ϴ�();

private:

};

