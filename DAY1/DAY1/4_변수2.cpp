// 4_변수1
#include <iostream>

struct Point
{
	int x, y;
};
int main()
{
	// 20page - 중요한 변화.!
	//int n = 10;
	//int x[3] = { 1,2,3 };
	//Point p1 = { 1,2 };

	// 일관된 초기화(uniform initialization) 문법 - C++11
	// 모든 종류의 변수를 초기화 할때 {} 사용
	// int n = { 10 };
	// int x[3] = { 1,2,3 };
	// Point p1 = { 1,2 };

	int n { 10 };
	int x[3] { 1,2,3 };
	Point p1 { 1,2 };

	// 직접 초기화(direct initialization) : =이 없는것
	// 복사 초기화(copy   initialization) : =이 있는것

	// {} 로 초기화(직접 또는 복사)시 데이타 손실 발생하면 error.
	int n2 = 3.4;   // ok.. 하지만 나쁜 코드,
	int n3 = { 3.4 }; // error. preventing narrow 라는 문법
	
	char c = { 300 }; // error
}



