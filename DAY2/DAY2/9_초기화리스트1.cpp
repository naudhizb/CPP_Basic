// 9_초기화리스트1    85page ~
#include <iostream>

class Point
{
	int x, y;
public:
	//Point(int a = 0) : x(a) {}

	Point(int a  = 0, int b = 0) 
		: x(a), y(b) // 초기화리스트.  대입이 아니라 초기화
	{
		x = a; // 대입
		y = b; 
	}
};
int main()
{
	Point pt(0, 0);

	int a = 0;  // 초기화. 만들면서 넣기
				// a가 class type이면 생성자 호출로 초기화
		
	int b;	// b가 class type이면 생성자 호출
	b = 0;	// 대입. 만들어진 메모리에 넣기.
			// b.operator=(0) 이라는 대입연산자 함수 호출
}




