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

	std::cout << pt; // cout.operator<<(Point) 가 있으면된다.
					// 하지만 멤버로 추가할수는 없다.
		// operator<<(cout, pt)

		// operator<<(std::ostream, Point)가 있어도 된다.
}


