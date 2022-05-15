#include <iostream>

// 버전 8. Stack.h 참고

// 버전 9. 템플릿 도입

/*
// StackT.h  에 복사해 놓으세요
template<typename T>
class Stack
{
	T* buff;
	int idx;
public:
	Stack(int size = 10)
	{
		buff = new T[size];
		idx = 0;
	}
	~Stack() { delete[] buff; }

	void push(const T& a) { buff[idx++] = a; }
	T  pop() { return buff[--idx]; }
};
*/
#include "StackT.h"

int main()
{
//	square<int>(10);
//	square(10);

	Stack<int> s1(100);
	s1.push(10);
	s1.push(20);
	std::cout << s1.pop() << std::endl;
}
