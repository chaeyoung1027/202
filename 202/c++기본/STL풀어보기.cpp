//vector클래스의 push_back 함수를 이용하여 임의의 정수형 데이터 5개를 입력받아 입력받은 데이터, 합, 평균을 출력하는 것으로 반복자 iterator를 사용하시오.

#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	int input, tot = 0;
	double avg;//평균

	for (int i = 0; i < 5; i++) {
		cin >> input;
		v.push_back(input);
	}

	vector<int>::iterator ptr;

	for (ptr = v.begin(); ptr != v.end(); ptr++) {
		tot += *ptr;
	}

	avg = tot / v.size();

	cout << "합 : " << tot << endl;
	cout << "평균 : " << avg << endl;
}