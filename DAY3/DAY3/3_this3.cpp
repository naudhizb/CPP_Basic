#include <iostream>

class Car
{
public:
	// 다음중 에러를 모두 고르세요
	void foo()        { std::cout << this << std::endl; }// 1
	static void goo() 
	{
		std::cout << this << std::endl; // error.
			// static 멤버 함수에서는 this를 사용할수 없다.
			// 객체 없이 호출할수 있기 때문에
	}// 2
};

int main()
{
}