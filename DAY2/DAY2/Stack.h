// Stack.h
#pragma once

// ���� 8. �ڵ� ����
//			public �Լ��� Ŭ�������� ���ʿ� ����
//			private ����� Ŭ���� �Ʒ� �ʿ� ��ġ
class Stack
{
public:
	// Ŭ���� �ȿ��� ����Լ��� ���� ����.
	Stack(int size = 10);
	~Stack();
	void push(int a);
	int  pop();

private:
	int* buff;
	int idx;
};

