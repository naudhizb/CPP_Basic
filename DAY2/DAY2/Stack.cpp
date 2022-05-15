// Stack.cpp

// Ŭ���� �������Ͽ����� ����θ� �ݵ�� �����ؾ� �մϴ�.
#include "Stack.h"

Stack::Stack(int size)
{
	buff = new int[size];
	idx = 0;
}
Stack::~Stack() { delete[] buff; }

void Stack::push(int a) { buff[idx++] = a; }
int  Stack::pop() { return buff[--idx]; }
