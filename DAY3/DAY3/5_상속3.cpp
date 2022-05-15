// 상속과 생성자.   135page ~
#include <iostream>

// 핵심
// 1. 파생 클래스의 초기화 리스트 목록에서 기반 클래스의 생성자를
//    호출하는 코드를 컴파일러가 생성해 주는것

// 2. 기반 클래스의 생성자는 기본적으로 default 생성자 호출
//    변경하려면 사용자가 초기화 리스트에서 기반 클래스생성자를
//	  명시적으로 호출해야 한다.
// 3. 기반 클래스에 디폴트 생성자가 없으면 반드시 파생 클래스에서
//    명시적으로 호출해야 한다.

class Base
{
public:
//	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};
class Derived : public Base
{
public:
//	Derived()        { std::cout << "Derived()" << std::endl; } // error
	Derived() : Base(0) { std::cout << "Derived()" << std::endl; } // error

	Derived(int a) : Base(a) { std::cout << "Derived(int)" << std::endl; }
	~Derived()     { std::cout << "~Derived()" << std::endl; }
};
int main()
{
	//Derived d;
	Derived d(1);
}