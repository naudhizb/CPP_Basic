// 11_���������2
#include <iostream>

class Point
{
public:
	int x, y;

	Point() : x(0), y(0) { std::cout << "������1" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "������2" << std::endl; }
	Point(const Point& pt) : x(pt.x), y(pt.y) { std::cout << "copy constructor" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt(1, 1); // ���� ��ü
Point foo()     // �� ��ȯ : �ӽð�ü�� ��ȯ�ȴ�.
{
	return pt; 
}
Point& goo()     // ���� ��ȯ : �ӽð�ü�� ������ ����°�
{					// 99page ������ �ҽ�
	return pt;
}

int main()
{
	foo().x = 10; // error. temporary �� ���ʿ� �ü�����
	goo().x = 10; // ok

	cout << "A" << "B" << "C";
}

// ����
n = x;
x = 10;
// 1. primitive
int  foo() { return x; } // x�� ��. 
int& goo() { return x; } // x ��ü (�޸�)

// 2. user type
Point  foo() { return pt; } // �ӽð�ü
Point& goo() { return pt; } // pt�� ��ü(�޸�)




