#include <iostream>

// ���� 3. C++���
// ĸ��ȭ : ���¸� ��Ÿ���� ����Ÿ�� ���¸� �����ϴ� �Լ��� 
//	        �ϳ��� ����ü �ȿ� ���� ���´�.
struct Stack
{
	// ��� ����Ÿ
	int buff[10];
	int idx;

	// ��� �Լ�
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
