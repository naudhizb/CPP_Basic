// 10_반복자1     220 page
#include <iostream>
#include <list>

template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;
}

int main()
{
	// 더블링크드 리스트
	// 배열 처럼 초기화 해서 사용하면 됩니다.
	std::list<int> s = { 1,2,3,4,5 };

	// 반복자(iterator) : 컨테이너의 요소를 가리키는 포인터역활의
	//		객체. 컨테이너의 구조에 상관없이 동일한 방법(++)으로
	//      이동
	auto p1 = s.begin(); // 처음요소를 가리키는 반복자
	auto p2 = s.end();   // 마지막 다음 요소

	std::cout << *p1 << std::endl;
	++p1;
	std::cout << *p1 << std::endl;


	auto ret = xfind(s.begin(), s.end(), 7 );

	if (ret == s.end())
		std::cout << "실패" << std::endl;
	else
		std::cout << *ret << std::endl;
}



