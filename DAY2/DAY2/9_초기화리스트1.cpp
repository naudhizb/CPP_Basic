// 9_�ʱ�ȭ����Ʈ1    85page ~
#include <iostream>

class Point
{
	int x, y;
public:
	//Point(int a = 0) : x(a) {}

	Point(int a  = 0, int b = 0) 
		: x(a), y(b) // �ʱ�ȭ����Ʈ.  ������ �ƴ϶� �ʱ�ȭ
	{
		x = a; // ����
		y = b; 
	}
};
int main()
{
	Point pt(0, 0);

	int a = 0;  // �ʱ�ȭ. ����鼭 �ֱ�
				// a�� class type�̸� ������ ȣ��� �ʱ�ȭ
		
	int b;	// b�� class type�̸� ������ ȣ��
	b = 0;	// ����. ������� �޸𸮿� �ֱ�.
			// b.operator=(0) �̶�� ���Կ����� �Լ� ȣ��
}




