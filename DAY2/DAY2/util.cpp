// util.cpp

// namespace 에 있는 함수 구현 방법 
// 방법 1. 함수 이름 앞에 namespace 이름 추가
/*
#include "util.h"
int util::Sub(int a, int b)
{
	return a - b;
}
*/
#include "util.h"
// 방법 2. namespace 를 다시 선언하고 함수 구현
namespace util
{
	int Sub(int a, int b)
	{
		return a - b;
	}
}