#include <iostream>
// 아래 2줄을 동일 합니다.
//const int c = 10; 
//int const c = 10;
template<typename T> 
class Base
{
public:
	// a는 상수 이다.
	//virtual void foo(const T a)
	virtual void foo(T const a)
	{
		std::cout << "Base foo" << std::endl;
	}
};
class Derived : public Base<int*>
{
public:
	// foo 재정의 해보세요. override 붙이지 마세요
	// a는 상수가 아니다.
	// a를 따라가면 상수
	//virtual void foo(const int*  a)
	virtual void foo( int *  const a)
	{
		std::cout << "Derived foo" << std::endl;
	}

};
int main()
{
	Base<int*>* p = new Derived;
	p->foo(0); // "Derived foo" 나오게 해보세요
}


