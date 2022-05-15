// 9_초기화리스트1    85page ~
#include <iostream>
// 주의 사항 : 초기화 리스트에 놓인 순서가 아니라..
//      멤버 데이타가 놓은 순서 대로 초기화 된다. - 88 page
class Point
{
public:
	int x, y;

	Point() : y(0), x(y)
	{
	}
};
int main()
{
	Point pt;
	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




