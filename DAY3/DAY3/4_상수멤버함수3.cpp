#include <iostream>

class Test
{
public:
	// 상수 멤버 함수와 비상수 멤버함수을 동시제공 가능
	void foo()       { std::cout << __FUNCSIG__ << std::endl; }
	void foo() const { std::cout << __FUNCSIG__ << std::endl; }
};

int main()
{
	Test t; 
	t.foo();  // 1번 호출, 없으면 2번 사용

	const Test ct;
	ct.foo(); // 2번호출, 없으면 error
}

