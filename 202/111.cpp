#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	Point p = { 1,2 };
	cout << "(" << p.x << "," << p.y << ")";
}