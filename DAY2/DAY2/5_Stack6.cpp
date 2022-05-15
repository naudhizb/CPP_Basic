#include <iostream>

// ���� 6. �ڷᱸ���� ���� - ���� �޸� �Ҵ� ���
//         �Ҹ��� ����. �Ҹ��ڿ��� ��ü�� ����ϴ� �ڿ� ����
//			�Ҹ��ڴ� �� ������ �ϴ� ���� �ƴ϶� �ʿ��� ��츸
//			����� �ȴ�.

class Stack
{
	int* buff;
	int idx;
public:
	Stack(int size = 10) 
	{ 
		buff = new int[size];
		idx = 0; 
	}

	// �Ҹ��� : Ŭ���� �̸��տ� ~ �� �ٴ� �Լ�
	//		   ��ü �ı��� �ڵ����� ȣ��ȴ�.
	~Stack() { delete[] buff; }


	void push(int a) { buff[idx++] = a; }
	int  pop() { return buff[--idx]; }
};
int main()
{
	//Stack s1; // ����Ʈ�� 10 ���

	Stack s1(100); // ��ü�� ����� ������ ȣ��
					// �����ڿ� ���ڷ� 100 ����

	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}
