// 2_namespace3.cpp - 9page 내용
#include <algorithm>
using namespace std;

int count = 0;

int main()
{
//	printf("%d\n", count); // std::count() 함수 인지
						   // 전역변수 count 인지 모호하다
	printf("%d\n", ::count);

	//int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
	int n = std::min(3, 2);
	int n2 = min(3, 2);
}
// 아래 처럼 2개의 파일에서 같은 namespace를 사용해도 됩니다.
// 이경우 충돌이 아닙니다.
// 흔히, "namespace 는 열려있다" 라고 표현합니다.
// a.h
namespace Audio
{
	//..
	void foo() {}
}
// b.h
namespace Audio
{
	//..
	void foo() {}
}
#include "a.h"
#include "b.h"