#include <iostream>

class Car
{
public:
	// ������ ������ ��� ������
	void foo()        { std::cout << this << std::endl; }// 1
	static void goo() 
	{
		std::cout << this << std::endl; // error.
			// static ��� �Լ������� this�� ����Ҽ� ����.
			// ��ü ���� ȣ���Ҽ� �ֱ� ������
	}// 2
};

int main()
{
}