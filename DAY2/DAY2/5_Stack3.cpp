#include <iostream>

// 버전 3. C++언어
// 캡슐화 : 상태를 나타내는 데이타와 상태를 조작하는 함수를 
//	        하나의 구조체 안에 묶어 놓는다.
struct Stack
{
	// 멤버 데이타
	int buff[10];
	int idx;

	// 멤버 함수
	void push(int a)      // void push(Stack* this, int a)
	{
		buff[idx++] = a; //  this-> buff[this->idx++] = a
	}
	int  pop()       { return buff[--idx]; }
};
int main()
{
	Stack s1; s1.idx = 0;
	Stack s2; s2.idx = 0;

	// push(&s1, 10);
	s1.push(10);// push( &s1, 10)
	s1.push(20);
	std::cout << s1.pop() << std::endl;
}
