#include <iostream>

/*
void foo(int a, int b) { }
class Dialog
{
public:
	void Close() {}
};
int main()
{
	printf("%p\n", &foo);
	printf("%p\n", &Dialog::Close);

	std::cout << 3;  // cout.operator<<(int)
	std::cout << &foo << '\n'; // cout.operator<<(void(*)(int, int))
	std::cout << &Dialog::Close; // cout.operator<<(void(Dialog::*)())
}
*/

class Dialog
{
public:
	void Close() {}
};
void foo(int  n) { std::cout << "int" << std::endl; }
void foo(bool n) { std::cout << "bool" << n << std::endl; }
void foo(void*n) { std::cout << "void*" << std::endl; }

void goo() {}

int main()
{
	// void* �� ��� �����͸� ��� �ٰ� ������
	// ����Լ��� �����ʹ� ������ �����ϴ�.
	// ��� �����ʹ� bool�� ��ȯ �˴ϴ�.
	// if ( ������) �� ���� �ϹǷ�.
	int n = 0;
	foo(&n);   // void*
	foo(&goo); // void*
	foo(&Dialog::Close); // bool

	// draw�� pure ��� ?
	printf("%p\n", &Shape::Draw);
}


