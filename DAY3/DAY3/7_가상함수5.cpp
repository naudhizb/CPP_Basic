// 7_�����Լ�5
#include <iostream>

// �Ѵ� ������ �ƴҶ� : goo
// �Ѵ� ���� �϶�    : foo
// foo����, goo�񰡻� : goo
// foo�񰡻�, goo���� : runtime error

class A
{
	int a;
public:
	void foo() { std::cout << "foo" << std::endl; }
};
class B   // ���� ��Ӱ��� �ƴմϴ�.
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

