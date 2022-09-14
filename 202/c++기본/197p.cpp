#include<iostream>

using namespace std;

template<typename T>
T sum(T x, T y) {
	T z = x + y;
	return z;
}


int main(void) {
	cout << sum<int>(1, 2) << endl;
	cout << sum<int>(1.2, 4.5) << endl;
}