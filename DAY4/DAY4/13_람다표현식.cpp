#include <iostream>

void foo(int(*f)(int, int)) 
{
}

int add(int a, int b) { return a + b; }

int main()
{
	foo( &add );
	// [] : lambda introducer. ����ǥ������ ���۵��� �˸��°�
	// �̸����� �Լ��� ����� ǥ���
	foo([](int a, int b) { return a + b; });

	add(1, 2);

	[](int a, int b) ->int {return a + b; }(1, 2);
}


