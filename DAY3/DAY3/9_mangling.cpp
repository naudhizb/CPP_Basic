// 9_mangling

// C  로 컴파일 하면 : 함수이름 Add(gcc),  _Add(vc)
// C++로 컴파일 하면 : ?Add@XXYYH@Z(VC++), ??(g++)

// name mangling :  C++ 컴파일러가 함수이름을 변경하는 것
// => 함수 오버로딩 때문에 Add 함수가 여러개 일수 있으므로
int Add(int a, int b)
{
	return a + b;
}

int main()
{
	Add(1, 2);
}

// Add.h
// extern "C" : 함수 또는 변수가 C언어의 mangling을 사용한다고
//              알려 주는 것
//extern "C" int Add(int a, int b);
// 결론 : C언어로 라이브러리 만들때 꼭 헤더를 아래 처럼 만드세요
//       그러면 Add 함수는 .c 와 .cpp에서 모두 사용가능합니다.

// 새로운헤더.h
#ifdef __cplusplus
extern "C" {
#endif

//#include"못건드리는 헤더"
	int Add(int a, int b);

#ifdef __cplusplus
}
#endif



// Add.c
int Add(int a, int b)
{
	return a + b;
}
// main.c
#include "Add.h"
                                
int main()
{
	Add(1, 2);
}


#include<stdio.h>

printf("heelo");