// StackT.h
// ���� : Ŭ���� ���ø��� ��� ���ϰ� �������Ϸ� �и�����
//       ����, ��� �����θ� ����� �־�� �մϴ�.
#pragma once

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
