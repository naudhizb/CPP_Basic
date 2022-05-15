// 11_���������  92 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// ���� ������ : �ڽŰ� ���� Ÿ�� ��ü�� ���ڷ� �޴� ������
	// ����ڰ� ������ ������ �����Ϸ��� ������ �ش�
	Point(const Point& pt)
		: x(pt.x), y(pt.y)
	{
		std::cout << "copy constructor" << std::endl;
	}
};

int main()
{
	Point p1;		// 1�� ������
	Point p2(1, 1);	// 2�� ������

	//Point p3(1);	// Point(int) ����� ������ �ʿ�.
					// �����Ƿ� error

	Point p4(p2);	// Point(Point) ����� �����ڰ� �ʿ�
					// ������ ok.

	Point p5 = p2;  // ���� ������. ������ �ƴ� ���� �ʱ�ȭ
}

