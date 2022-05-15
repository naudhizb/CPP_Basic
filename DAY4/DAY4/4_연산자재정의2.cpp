// 4_������������     182 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	// ��� �Լ��� ���� operator+
	Point operator+(const Point& p)
	{
		std::cout << "member operator+" << std::endl;
		
		Point ret(x + p.x, y + p.y);
		return ret;
	}
	friend Point operator+(const Point& p1, const Point& p2);
};
Point operator+(const Point& p1, const Point& p2)
{
	Point p3(p1.x + p2.x, p1.y + p2.y);
	return p3;
}
int main()
{
	Point p1(1, 1), p2(2, 2);

	Point p3 = p1 + p2; // 1. p1.operator+(p2) �� ã�� ������
						// 2. operator+(p1, p2)�� ã�´�.

	// p1 + p2 => p1.operator+(Point)
	// p1 + 5  => p1.operator+(int)
	// 5 + p1  => 5.operator+(Point) error. ����� �ȵ�.
	//										�Ϲ��Լ��� ����
					
}



