// 5_Stak1 - 60 page ~
#include <iostream>

// 스택을 만들어 봅시다.
// 버전 1. C언어
// 단점 : 스택이 2개 이상 필요하다면....
int buff[10];
int idx = 0;

void push(int a) { buff[idx++] = a;}
int  pop()       { return buff[--idx]; }

int main()
{
	push(10);
	push(20);
	std::cout << pop() << std::endl;
}