#include <iostream>

// ���� 8. Stack.h ����

// ���� 9. ���ø� ����

/*
// StackT.h  �� ������ ��������
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
