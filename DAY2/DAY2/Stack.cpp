// Stack.cpp

// 클래스 구현파일에서는 선언부를 반드시 포함해야 합니다.
#include "Stack.h"

Stack::Stack(int size)
{
	buff = new int[size];
	idx = 0;
}
Stack::~Stack() { delete[] buff; }

void Stack::push(int a) { buff[idx++] = a; }
int  Stack::pop() { return buff[--idx]; }
