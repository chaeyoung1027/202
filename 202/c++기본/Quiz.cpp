class CBox {
public:	//또는 protected 만약 private로 하고싶다면 저 값을 바꾸게 해주는 method를 public 또는 Protected로 CBox안에 만들어야한다.
	double width;
};

class ChildBox :CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};

int main(void) {

}