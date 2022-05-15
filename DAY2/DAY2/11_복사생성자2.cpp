// 11_���������2
// 11_���������  92 page
#include <iostream>
// ���� �����ڰ� ���Ǵ� ��� 3���� - 96 page
// 1. ��ü ������ �ڽŰ� ����Ÿ�� ��ü�� �ʱ�ȭ �Ҷ�

// 2. �Լ��� ���ڸ� call by value �� ���� ������
//			=> const ���۷����� �������.!

// 3. �Լ��� �� Ÿ������ ��ü�� ��ȯ �Ҷ�
//			=> �ӽð�ü�� �����Ǹ鼭 ���� ������ ȣ��.

class Point
{
	int x, y;
public:
	Point()                : x(0), y(0) {} 
	Point(int a, int b)    : x(a), y(b) {} 
	Point(const Point& pt) : x(pt.x), y(pt.y){	std::cout << "copy constructor" << std::endl;	}
};
//void foo(Point pt) {} // Point pt = p1;
void foo(const Point& pt) {} // const Point& pt = p1;

int main()
{
	Point p1(1, 2); // 2�� ������
	//Point p2(p1);   // ���� ������
	//Point p3 = p1;  // ���� ������

	foo(p1);
}

