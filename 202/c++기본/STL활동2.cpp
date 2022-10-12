/*데이터 삽입(3개정도)
데이터 전체 출력
삽입한 데이터 중 1개 제거
데이터 전체 출력*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
    //map<key 자료형, value 자료형>
    map<string, string> m;
    m["도경수"] = "170";
    m["박찬열"] = "184";
    m["변백현"] = "176";
    m["김종인"] = "182";

    map<string, string> ::iterator iter;

    //벡터의 원소들을 출력(iterator)
    //삽입할 때마다 key는 자동정렬
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << (*iter).first << "의 키는" << (*iter).second << "cm이다." << endl;    //iter: 데이터 x 데이터를 가리키는 것
        cout << iter->first << "의 키는" << iter->second << "cm이다." << endl;
    }
    cout << endl;

    map<string, string> ::iterator actor = m.find("김신");

    cout << "도경수" << m["170"] << endl;
    cout << "박찬열" << m["184"] << endl;
    cout << "변백현" << m["176"] << endl;
    cout << "김종인" << m["182"] << endl;

    return 0;
}