// 10_캐스팅1.cpp    48 page
#include <iostream>

// C 캐스팅의 문제점
// 논리적으로 맞지 않고 위험한 경우도 대부분 성공한다.

// 그래서 C++은 4개의 캐스팅 연산을 제공한다.
int main()
{
	int n = 3;

//	double* p = &n; // C언어 : 경고, C++ : 에러

	double* p = (double*)&n; // C스타일 캐스팅

	*p = 3.4;
}
