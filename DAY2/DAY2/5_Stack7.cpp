#include <iostream>

// 버전 7. 선언과 구현의 분리. 파일 분할
// Stack.h
/*
class Stack
{
	int* buff;
	int idx;
public:
	// 클래스 안에는 멤버함수의 선언만 제공.
	Stack(int size = 10);
	~Stack();
	void push(int a);
	int  pop();
};
// Stack.cpp
// 멤버 함수의 외부 구현
Stack::Stack(int size )
{
	buff = new int[size];
	idx = 0;
}
Stack::~Stack() { delete[] buff; }

void Stack::push(int a) { buff[idx++] = a; }
int  Stack::pop() { return buff[--idx]; }

*/

// 클래스 사용자는 헤더만 포함하면 됩니다.
#include "Stack.h"

int main()
{
	Stack s1(100); 

	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}
