// 4_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 교재 18 page ~

struct Point 
{
	int x, y; 
};

int main()
{
	int n1 = 0b1; // 2진수 표기법, C++11 부터 지원
	int n2 = 1'000'000; // digit separator, C++11부터
					// 원리 : 정수형 리터럴 사이의 ' 는
					//      컴파일러가 무시

	struct Point p1; // C언어 스타일
	Point p2; // C++언어 스타일.

	//foo()
	int n3; // 함수 중간에 변수 선언. 
			// C89 : error
			// C99 : ok. 
			// C++ : ok.

}