#include <iostream>

class Test
{
public:
	// ��� ��� �Լ��� ���� ����Լ��� �������� ����
	void foo()       { std::cout << __FUNCSIG__ << std::endl; }
	void foo() const { std::cout << __FUNCSIG__ << std::endl; }
};

int main()
{
	Test t; 
	t.foo();  // 1�� ȣ��, ������ 2�� ���

	const Test ct;
	ct.foo(); // 2��ȣ��, ������ error
}

