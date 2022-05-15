// 5_Stak1 - 60 page ~
#include <iostream>

// 스택을 만들어 봅시다.
// 버전 2. C언어
//		  관련된 데이타를 묶어서 "Stack"타입을 설계하자

struct Stack
{
	int buff[10];
	int idx;
};
void push(Stack* s, int a) { s->buff[(s->idx)++] = a; }
int  pop(Stack* s)         { return s->buff[--(s->idx)]; }
int main()
{
	Stack s1; s1.idx = 0;
	Stack s2; s2.idx = 0;

	push(&s1, 10);
	push(&s1, 20);
	std::cout << pop(&s1) << std::endl;
}