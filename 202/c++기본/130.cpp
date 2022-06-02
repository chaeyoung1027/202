#include <iostream>
#include<string.h>

using namespace std;

class CPerson {
private:
	string name;
	int age;

	CPerson();

	CPerson(string name, int age) {
		this->name = name;
		this->age = age;
	}
};
int main() {
	CPerson cp("ȫ�浿", 33);
}