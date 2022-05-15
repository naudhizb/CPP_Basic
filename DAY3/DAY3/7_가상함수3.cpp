#include <iostream>
// �Ʒ� 2���� ���� �մϴ�.
//const int c = 10; 
//int const c = 10;
template<typename T> 
class Base
{
public:
	// a�� ��� �̴�.
	//virtual void foo(const T a)
	virtual void foo(T const a)
	{
		std::cout << "Base foo" << std::endl;
	}
};
class Derived : public Base<int*>
{
public:
	// foo ������ �غ�����. override ������ ������
	// a�� ����� �ƴϴ�.
	// a�� ���󰡸� ���
	//virtual void foo(const int*  a)
	virtual void foo( int *  const a)
	{
		std::cout << "Derived foo" << std::endl;
	}

};
int main()
{
	Base<int*>* p = new Derived;
	p->foo(0); // "Derived foo" ������ �غ�����
}


