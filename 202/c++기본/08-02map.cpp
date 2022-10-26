#include <iostream>
#include <string>
#include <map>

using namespace std;

//김신: 공유
//지은탁: 김고은
//저승사자: 이동욱
//써니: 유인나

//arr["김신"] = "공유"
//arr["저승사자"] = "이동욱"

int main(void) {
    //map<key 자료형, value 자료형>
    map<string, string> m;
    m["김신"] = "공유";
    m["저승사자"] = "이동욱";
    m["지은탁"] = "김고은";
    m["써니"] = "유인나";

    //벡터의 원소들을 출력(iterator)
    //삽입할 때마다 key는 자동정렬
    for (auto x : m) {
        cout << x.first << "역" << x.second << "분" << endl;
    }
    cout << endl;

    cout << "김신역" << m["김신"] << endl;
    cout << "저승사자역" << m["저승사자"] << endl;
    cout << "지은탁역" << m["지은탁"] << endl;
    cout << "써니역" << m["유인나"] << endl;

    return 0;
}