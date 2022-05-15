// Stack.h
#pragma once

// 버전 8. 코딩 관례
//			public 함수는 클래스선언 위쪽에 놓고
//			private 멤버는 클래스 아래 쪽에 배치
class Stack
{
public:
	// 클래스 안에는 멤버함수의 선언만 제공.
	Stack(int size = 10);
	~Stack();
	void push(int a);
	int  pop();

private:
	int* buff;
	int idx;
};

