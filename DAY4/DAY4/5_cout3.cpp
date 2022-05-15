#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os,
									const Point& pt);
	
};
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y << '\n';
	return os;
}

int main()
{
	// a + b => a.operator+(b)
	//			operator+(a,b)
	Point pt{ 1,2 };

	std::cout << pt; // cout.operator<<(Point) �� ������ȴ�.
					// ������ ����� �߰��Ҽ��� ����.
		// operator<<(cout, pt)

		// operator<<(std::ostream, Point)�� �־ �ȴ�.
}


