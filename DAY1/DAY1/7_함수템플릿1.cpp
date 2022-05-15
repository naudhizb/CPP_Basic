// 7_함수템플릿1.cpp
#include <iostream>
//#include <stdio.h>

// cl /Tc 소스.cpp     : C 언어
// cl /Tp 소스.cpp     : C++ 언어

// 모든 타입에 동작하는 함수 만들기 - C언어
// 매크로 함수
//#define square(x) ((x)*(x))

// C++ : int 버전과 double 버전을 따로 만들자
//    방법 1. 사용자가 직접 만들자
//    방법 2. 함수 템플릿을 만들자. 컴파일러가 함수 생성

// Code Bloat : 템플릿 사용시 컴파일러가 너무 많은 함수(클래스)
//				를 만들어서 목적코드가 커지는 현상
template<typename T> 
T square(T a)
{
	// __FUNCTION__  : 함수 이름을 담은 C++ 표준 매크로.
	// __FUNCSIG__ : 함수이름+signature. C++ 표준 아님.
	//				  VC++ 만 지원
	// __PRETTY_FUNCTION__ : g++에서 지원

	std::cout << __FUNCSIG__ << std::endl;

	return a * a;
}

int main()
{
	square(3);
	square(3.4);

	short s = 3;
	square(s);


	int n = 3;
	int ret = square(++n); // ((++n)*(++n))

	printf("%d\n", ret);
	//std::cout << ret << std::endl; // ??	
}