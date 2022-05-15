#include <iostream>

// 참고 : static 멤버 함수에는 const를 붙일수 없습니다.
//       객체없이 호출가능하므로.

class Test
{
public:
	// 핵심 : 상수 멤버 함수는 선언부와 구현부 모두에 const를
	//			붙여야 합니다.  125 page
	void foo();
	void foo() const;
};
// 구글에서 "


void Test::foo()
{
	std::cout << __FUNCSIG__ << std::endl; 
}
void Test::foo() const 
{ 
	std::cout << __FUNCSIG__ << std::endl; 
}


int main()
{
	
}

