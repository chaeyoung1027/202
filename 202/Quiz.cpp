class CBox {
public:	//�Ǵ� protected ���� private�� �ϰ�ʹٸ� �� ���� �ٲٰ� ���ִ� method�� public �Ǵ� Protected�� CBox�ȿ� �������Ѵ�.
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