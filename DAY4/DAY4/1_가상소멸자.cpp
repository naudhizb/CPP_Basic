// 1_가상소멸자     149 page
#include <iostream>

// 핵심 : 모든 기반 클래스의 소멸자는 반드시 가상함수 이어야 한다.

class Base
{
public:
	virtual ~Base() {} // 기반 클래스의 소멸자가 가상이면
					   // 모든 파생클래스의 소멸자는 가상함수이다
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "자원할당" << std::endl; }
	virtual ~Derived() { std::cout << "자원해지" << std::endl; }
};
int main()
{
	Base* p = new Derived; // 기반 클래스포인터 = &파생클래스
	delete p; 
}
