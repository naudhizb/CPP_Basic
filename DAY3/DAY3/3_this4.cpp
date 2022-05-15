// 3_this4
// 1. 일반 함수 포인터에 멤버 함수 주소를 담을수 없다.
// 2. 일반 함수 포인터에 static 멤버 함수 주소를 담을수 있다.

class Dialog
{
public:
	void Close() {}
	static void Close2() {}
};
void foo() {}

int main()
{
	void(*f1)() = &foo; // ok.
	void(*f2)() = &Dialog::Close; // 될까요 ?
			// error. 멤버 함수는 this가 전달됩니다

	void(*f3)() = &Dialog::Close2; // ok.
}

