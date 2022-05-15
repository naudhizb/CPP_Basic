// 9_초기화리스트1    85page ~
#include <iostream>

// 구글 - "webos   github"

// 주의 사항 : 초기화 리스트에 놓인 순서가 아니라..
//      멤버 데이타가 놓은 순서 대로 초기화 된다. - 88 page
class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0);
};
Point::Point(int a, int b) 
	: x(a), 
	  y(b)
{
}


int main()
{

}




