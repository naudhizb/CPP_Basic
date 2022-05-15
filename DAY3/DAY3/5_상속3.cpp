// ��Ӱ� ������.   135page ~
#include <iostream>

// �ٽ�
// 1. �Ļ� Ŭ������ �ʱ�ȭ ����Ʈ ��Ͽ��� ��� Ŭ������ �����ڸ�
//    ȣ���ϴ� �ڵ带 �����Ϸ��� ������ �ִ°�

// 2. ��� Ŭ������ �����ڴ� �⺻������ default ������ ȣ��
//    �����Ϸ��� ����ڰ� �ʱ�ȭ ����Ʈ���� ��� Ŭ���������ڸ�
//	  ��������� ȣ���ؾ� �Ѵ�.
// 3. ��� Ŭ������ ����Ʈ �����ڰ� ������ �ݵ�� �Ļ� Ŭ��������
//    ��������� ȣ���ؾ� �Ѵ�.

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