// 4_�������Լ�1.cpp    119 page ~
#include <iostream>
class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() const   // ��� ��� �Լ�
	{	
		// ��� ��� �Լ� �ȿ����� ��� ����� ��� ��� �մϴ�
		// x = 100; // error

		std::cout << x << ", " << y << std::endl;
	}
};
int main() 
{
	// �� ��� ��� �Լ��� "��" �ʿ��Ѱ� ?

	const Point p(1, 2);
	p.x = 10;		// error. p�� ����̹Ƿ�
	p.set(10, 20);	// error.
	p.print();		// error. ȣ��ǰ� �Ϸ��� 
					// print() �� ��� ��� �Լ��� �Ǿ� �մϴ�.

	// �ٽ� : "��� ��ü" �� "��� ��� �Լ�"�� ȣ���Ҽ� �ֽ��ϴ�.
	// 121 page �Ʒ� �κ�
}

