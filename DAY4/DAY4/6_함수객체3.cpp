// 6_함수객체2
#include <iostream>
#include <bitset>   // STL bitset

// 함수 객체의 장점 - 199 아래
// 1. 상태를 가지는 함수(멤버 데이타가 있다는 의미)

// 2. 특정상황에서는 함수 보다 함수객체가 빠르다.
//    (인라인 치환이 더 잘된다는 의미)

class URandom
{
	std::bitset<10> bs;
public:
	URandom() { bs.set(); } // 모두 1로

	int operator()()
	{
		if (bs.none()) return -1; // 모두 0이면

		int v = 0;
		while (!(bs.test(v = rand() % 10)));

		bs.reset(v);

		return v;
	}
};

int main()
{
	URandom urand;

	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}


