// 7_가상함수5
#include <iostream>

// 둘다 가상이 아닐때 : goo
// 둘다 가상 일때    : foo
// foo가상, goo비가상 : goo
// foo비가상, goo가상 : runtime error

class A
{
	int a;
public:
	void foo() { std::cout << "foo" << std::endl; }
};
class B   // 주의 상속관계 아닙니다.
{
	int b;
public:
	virtual void goo() { std::cout << "goo" << std::endl; }
};
int main()
{
	A aaa;
	B* p = reinterpret_cast<B*>(&aaa);
	p->goo(); // foo ? goo 
			// p->vtptr[1]() 
}

