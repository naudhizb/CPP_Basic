#include <iostream>

// ���� 4. ���� ���� - "�߸� ����ϱ� ��ư� �����ض�"
//			�ܺ��� �߸��� ������� ��ü�� ���°� �Ҿ���
//			���� ���� ���´�.

// private, public : ���� ������

//struct Stack  // ���� ������ ������ ����Ʈ�� public
class Stack     // ���� ������ ������ ����Ʈ�� private
{
//private:			// ��� �Լ������� ���� ����
	int buff[10];	// ����� �ƴ� �Լ��� ���� �ȵ�
	int idx;

public:				// ��� �Լ����� ���ٰ���
	void init()      { idx = 0; }
	void push(int a) { buff[idx++] = a; 	}
	int  pop()       { return buff[--idx]; }
};
int main()
{
	Stack s1; 
	//s1.idx = 0; // error
	s1.init();
	s1.push(10);
	s1.push(20);

	//s1.idx = 100;

	std::cout << s1.pop() << std::endl;
}
