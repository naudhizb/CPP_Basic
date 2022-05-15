// 6_STL
#include <iostream>
#include <stack>
#include <vector>
#include <string>  

int main()
{
//	char s1[10] = "hello";
//	char s2[10] = "hello";
//	if (s1 == s2) {}

	// C++ string 클래스 - 문자열을 다루는 타입
	std::string s1 = "hello";
	std::string s2 = "hello";
	if (s1 == s2) {} // ok

	// 동적 배열
	std::vector<int> v(10, 0); // 10개를 0으로 초기화
	v[0] = 3;		// 사용법은 배열과 동일
	v.resize(15);	// 크기 변경도 가능

	for (auto& n : v)
		std::cout << n << std::endl;
}
// C++에서 배울것
// 1. C와 다른 C++ 문법  - 어제
// 2. 하나의 클래스를 만드는 데 필요한 문법 - 오늘
// 3. 만들어진 클래스를 잘 사용하는 방법 - 목요일
// 4. 하나의 클래스가 아닌 프로그램 자체를 객체지향으로 설계
//		=> 상속 문법을 알아야 한다.   "수요일"


