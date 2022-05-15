#include <iostream>

void foo(int(*f)(int, int)) 
{
}

int add(int a, int b) { return a + b; }

int main()
{
	foo( &add );
	// [] : lambda introducer. 람다표현식이 시작됨을 알리는것
	// 이름없는 함수를 만드는 표기법
	foo([](int a, int b) { return a + b; });

	add(1, 2);

	[](int a, int b) ->int {return a + b; }(1, 2);
}


