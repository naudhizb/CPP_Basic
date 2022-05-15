// 4_������������     182 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	// friend ���� : ��� �Լ��� �ƴ����� private�����
	//				�����ϰ� �ϰ� ������ ���
	//				�ַ� ������ �����ǿ��� ���� ���.
	//friend void foo();
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

	int n = 3 + 4;

	// "����� ���� Ÿ�Ե� primitive Ÿ��ó�� ����Ҽ� �־���Ѵ�"
	Point p3 = p1 + p2; // operator+(Point, Point) �� ã�Եȴ�

	// operator+�� �ᱹ �Լ� �Դϴ�. �Ʒ� ó�� ����ص� �˴ϴ�.
	Point p4 = operator+(p1, p2);

	// ������ ������ �Լ��� ����ϴ� ���
	// 1. �Ϲ� �Լ�ó�� �̸����� : operator+(p1, p2)
	// 2. ������ ��ȣ��         : p1 + p2
}



