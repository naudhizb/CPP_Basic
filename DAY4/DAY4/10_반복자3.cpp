// 10_�ݺ���3
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
		}; // ���� Ŭ����
	};
}
*/
int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	// 1. �ݺ��� Ÿ��
	std::list<int>::iterator p1 = s.begin();
	auto p2 = s.begin();
	
	// 2. end�� ������ ����(past the end) �̴�.!!
	auto p3 = s.begin();
	auto p4 = s.end();

	*p3 = 10; // ok!!
	*p4 = 10; // runtime error
}

