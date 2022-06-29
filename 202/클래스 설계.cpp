#include <string>
using namespace std;

class animal
{
public:
	void 먹다();
	void 달리다();

private:
};

class DOG : public animal
{
public:
	void 짖다();

private:
	string size;
	string Species;
};

class Golden : public DOG
{
public:
	void 웃다();//생김새
	void 사냥하다();
	void 착하다();
	void 활기차다();

private:
	string color;
	string age;
};

class chihuahua : public DOG
{
public:
	void 날카롭다();//성격
	void 겁이없다();
	void 용감하다();

private:

};

