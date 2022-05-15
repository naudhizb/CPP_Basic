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
	// void* 는 모든 포인터를 담는 다고 하지만
	// 멤버함수의 포인터는 담을수 없습니다.
	// 모든 포인터는 bool로 변환 됩니다.
	// if ( 포인터) 가 가능 하므로.
	int n = 0;
	foo(&n);   // void*
	foo(&goo); // void*
	foo(&Dialog::Close); // bool

	// draw가 pure 라면 ?
	printf("%p\n", &Shape::Draw);
}


