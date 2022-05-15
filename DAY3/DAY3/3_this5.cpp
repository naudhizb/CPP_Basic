#include <iostream>
#include <Windows.h> // windows 용 함수들..

/*
// win32 api 에서 스레드 함수 모양
DWORD __stdcall foo(void* arg)
{
	return 0;
}
int main()
{
	CreateThread(0, 0, &foo, "A", 0, 0); // 스레드 생성함수
				// linux : pthread_create()
}
*/
// 스레드 개념을 객체지향에서 활용해 봅시다.
class Thread
{
	int data = 0;
	
public:
	void run() { CreateThread(0, 0, &threadMain, this, 0, 0); }

	// 핵심 1. 아래 함수가 static 멤버 함수로 만드는 이유를
	//         정확히 알아야 합니다.
private:
	static DWORD __stdcall threadMain(void* arg)
	{
		//data = 20; // this->data = 20  로변해야 하는데
					// this 가 없다.

		Thread* self = static_cast<Thread*>(arg);

		// 이제 self가 this입니다.
		// self를 사용하면 모든 멤버에 접근 가능합니다.
		self->data = 10;

		return 0;
	}
};

int main()
{
	Thread t;
	t.run(); // 이순간 스레드가 생성되어야 합니다.
	
}

// 핵심.
// C언어에서의 callback 함수.  setTimer(1second, &foo)
// 는 반드시 함수 모양이 정해져 있습니다.

// C++로 디자인할때  callback 함수는 static 멤버 함수이어야합니다.

// static 멤버 함수에서는 this가 없어서 멤버 데이타에 접근이 안됩니다.
// this를 사용하게 하는 다양한 기법이 있습니다.




