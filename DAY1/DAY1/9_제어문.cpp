// 9_제어문
#include <iostream>
// 39 page.. 
int foo()
{
	return 0;
}
int main()
{
	switch (int n = foo(); n )
	{
	case 0: break;
	case 1: break;
	}
	// init control statement
	// 초기화 구문을 가진 제어문
	// C++17문법 - /std:c++latest 필요
	if ( int ret = foo(); ret == 0 )
	{
		//printf("%d\n", ret);
	}

	int ret = foo();
	if ( ret == 0)
	{ 
	}
}
