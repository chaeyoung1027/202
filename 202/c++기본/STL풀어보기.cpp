//vectorŬ������ push_back �Լ��� �̿��Ͽ� ������ ������ ������ 5���� �Է¹޾� �Է¹��� ������, ��, ����� ����ϴ� ������ �ݺ��� iterator�� ����Ͻÿ�.

#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	int input, tot = 0;
	double avg;//���

	for (int i = 0; i < 5; i++) {
		cin >> input;
		v.push_back(input);
	}

	vector<int>::iterator ptr;

	for (ptr = v.begin(); ptr != v.end(); ptr++) {
		tot += *ptr;
	}

	avg = tot / v.size();

	cout << "�� : " << tot << endl;
	cout << "��� : " << avg << endl;
}