class Phone {
	void call();
	void receive();
	void sendMessege();
};

class Music {
	void soundOn();
	void soundOff();
};

class SmartPhone :public Phone {
	SmartPhone();
	~SmartPhone();
};
SmartPhone::SmartPhone() {
}
class SmartPhone :public Music {
};

int main(void) {


	return 0;
}