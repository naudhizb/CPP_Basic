// util.h
#pragma once

namespace util
{
	// 규칙 1. 함수 템플릿은 구현부 자체가 헤더 파일에
	//         있어야 합니다.
	template<typename T>
	void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}

	// 규칙 2. inline 함수도 구현자체를 헤더에 포함해야 합니다.
	inline int Add(int a, int b)
	{
		return a + b;
	}

	// 규칙 3. 일반 함수는 헤더에 선언부를 소스파일에 구현부를
	//		 제공하면 됩니다.
	int Sub(int a, int b);
}