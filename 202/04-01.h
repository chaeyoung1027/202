#include <iostream>

using namespace std;

class Point
{
public:
	//������
	Point(int x, int y);
	Point(void);

	//������ �����ε�
	Point operator+(const Point& rhs);

	void print(void);

private:
	int mX;
	int mY;
};