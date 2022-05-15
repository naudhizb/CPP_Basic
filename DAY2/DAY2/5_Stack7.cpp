#include <iostream>

// ���� 7. ����� ������ �и�. ���� ����
// Stack.h
/*
class Stack
{
	int* buff;
	int idx;
public:
	// Ŭ���� �ȿ��� ����Լ��� ���� ����.
	Stack(int size = 10);
	~Stack();
	void push(int a);
	int  pop();
};
// Stack.cpp
// ��� �Լ��� �ܺ� ����
Stack::Stack(int size )
{
	buff = new int[size];
	idx = 0;
}
Stack::~Stack() { delete[] buff; }

void Stack::push(int a) { buff[idx++] = a; }
int  Stack::pop() { return buff[--idx]; }

*/

// Ŭ���� ����ڴ� ����� �����ϸ� �˴ϴ�.
#include "Stack.h"

int main()
{
	Stack s1(100); 

	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}
