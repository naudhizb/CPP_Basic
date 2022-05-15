// 3_예제2.cpp
#include <iostream>
#include "Util.h"
#include <algorithm>  // 이 안에 swap가 있습니다.
// Standard Template Library : STL
// C++ 표준이 제공하는 템플릿 기반 라이브러리.
int main()
{
	int x = 10, y = 20;

	std::swap(x, y);

	util::Swap(x, y);
	util::Add(x, y);
	util::Sub(x, y);
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}

const int c = 0; // const 전역변수 ?
				// C언어 : external linkage
				// C++ : internal linkage

// internal linkage (내부 연결) => 헤더 파일에 놓이는 것들
// 임의의 심볼이 자신을 선언한 컴파일 단위(파일)에서만 사용가능한것
// => 함수 템플릿, 인라인 함수, static 전역변수, static 일반함수
//    매크로, 

// external linkage (외부 연결)
// 심볼이 프로젝트내의 모든 컴파일 단위(파일)에서 사용가능한것.
// => 일반 함수, 전역변수,

