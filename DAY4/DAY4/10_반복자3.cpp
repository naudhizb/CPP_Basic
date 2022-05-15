// 10_반복자3
#include <iostream>
#include <list>
/*
namespace std
{
	template<typename T> class list
	{
	public:
		class iterator {
			// operator++()
		}; // 내포 클래스
	};
}
*/
int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	// 1. 반복자 타입
	std::list<int>::iterator p1 = s.begin();
	auto p2 = s.begin();
	
	// 2. end는 마지막 다음(past the end) 이다.!!
	auto p3 = s.begin();
	auto p4 = s.end();

	*p3 = 10; // ok!!
	*p4 = 10; // runtime error
}

