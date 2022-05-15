// StackT.h
// 주의 : 클래스 템플릿은 헤더 파일과 구현파일로 분리하지
//       말고, 모든 구현부를 헤더에 넣어야 합니다.
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
