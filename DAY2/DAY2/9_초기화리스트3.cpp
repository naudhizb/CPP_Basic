// 9_초기화리스트1    85page ~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b): x(a), y(b) 
	{
	}
};

// 클래스의 멤버로 "디폴트 생성자(인자없는 생성자)"가 없는 타입이
// 있다면
// C++98 스타일 : 반드시 초기화 리스트에서 초기화 해야 한다.
// C++11 : 멤버 변수 선언시 {} 사용가능. Point ptFrom{0,0}
//		   

class Rect
{
	int data = 0;
	Point ptFrom;
	Point ptTo;
public:
	Rect() : ptFrom(0,0), ptTo(0,0)
	{
		//ptFrom(0, 0); // ? ptFrom 이라는 함수를 호출하는 코드		
						// error
	}
};
int main()
{
	Rect r; // 잘 생각해 보세요. 함수가 총 몇번 호출?
}




