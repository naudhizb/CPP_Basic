// 11_���������2
// 11_���������  92 page
#include <iostream>
// ���� �����ڰ� ���Ǵ� ��� 3���� - 96 page
// 1. ��ü ������ �ڽŰ� ����Ÿ�� ��ü�� �ʱ�ȭ �Ҷ�

// 2. �Լ��� ���ڸ� call by value �� ���� ������
//			=> const ���۷����� �������.!

class Point
{
	int x, y;
public:
	Point() : x(0), y(0)             { std::cout << "������1" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "������2" << std::endl; }
	Point(const Point& pt) : x(pt.x), y(pt.y) { std::cout << "copy constructor" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
Point foo()  // return by value
{
	Point pt(1,2);
	return pt; // �̼��� ���Ͽ� �ӽð�ü�� �����˴ϴ�.
				// ���Ͽ� �ӽð�ü�� pt�� �����ؼ� ����
}
int main()
{
	Point ret;
	std::cout << "----" << std::endl;
	ret = foo();
	std::cout << "----" << std::endl;
}
// ������1
// -----
// ������2
// ���� ������ - ���Ͽ� �ӽð�ü�� ����� ����
// �Ҹ��� - pt �ı�
// �Ҹ��� - ���Ͽ� �ӽð�ü �ı�
//------
// �Ҹ��� - ret �ı�.
