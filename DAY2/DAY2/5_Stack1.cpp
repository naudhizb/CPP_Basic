// 5_Stak1 - 60 page ~
#include <iostream>

// ������ ����� ���ô�.
// ���� 1. C���
// ���� : ������ 2�� �̻� �ʿ��ϴٸ�....
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