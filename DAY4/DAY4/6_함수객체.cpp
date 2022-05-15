// 6_함수객체     199 page
#include <iostream>
// 함수 객체(function object, functor)
// () 연산자를 재정의 해서 함수 처럼 사용가능한 객체
class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	Plus p;
	int n = p(1, 2); // p.operator()(1,2) 의 원리

	std::cout << n << std::endl;

	// a + b; // a.operator+ (b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2)
}

