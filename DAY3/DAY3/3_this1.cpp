// 3_this1.cpp      126 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	void set(int a, int b) // set(Point* this, int a, int b)
	{
		x = a;	// this->x = a;
		y = b;	// this->y = b;  ó�� ������ �˴ϴ�.

		// this : ���� ��� �Լ��� ȣ���Ҷ� ����� ��ü�� �ּ�
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;
	p1.set(10, 20); // set(&p1, 10, 20) ó�� ������ �˴ϴ�.
					// push 20
					// push	10   ���� ���ڵ�.
					// mov  ecx , &p1   ��ü �ּҴ� �������ͷ�
					// call Point::set
}