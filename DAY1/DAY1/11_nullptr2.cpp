#include <iostream>

void foo(void* p) { std::cout << "void*" << std::endl;}

void foo(int n)   { std::cout << "int" << std::endl; }

void goo(char* p) { std::cout << "goo" << std::endl; }

int main()
{
	foo(0); // int
	foo((void*)0); // void*

/*
#ifdef __cplusplus		// 모든 C++컴파일러는 이 매크로 정의.
#define NULL 0
#else
#define NULL (void*)0
#endif
*/
	foo(NULL);
	goo(NULL); // void* => char* 의 암시적 변환 필요
				// C언어 : ok..     C++언어 : error

	double d = 0.0;
	int n = 0;
	nullptr_t a = nullptr; // nullptr의 타입은 nullptr_t 입니다.
					// nullptr_t 타입은 모든 타입의 포인터로
					// 암시적 형변환 됩니다.

	int* p3 = a; // ok.. 결국 nullptr 
}