#include <iostream>

// ���� 5. ��ü �ʱ�ȭ�� �ڵ����� - ������ ����

class Stack 
{
	int buff[10];
	int idx;
public:			
	// ������ : Ŭ���� �̸��� ������ �Լ�.
	//		   ��ȯŸ���� ǥ�� ���� �ʴ´�.
	//			��ü�� �����ϸ� �ڵ����� ȣ��ȴ�.
	Stack() { idx = 0; }

	void push(int a) { buff[idx++] = a; }
	int  pop() { return buff[--idx]; }
};
int main()
{
	Stack s1;
	//s1.init();
	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}
