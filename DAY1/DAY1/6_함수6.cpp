#include <iostream>

/*
// overloading resolution : 함수 찾는 순서
void foo(int n)    { std::cout << "int" << endl; }
void foo(short n)    { std::cout << "short" << endl; }

//void foo(float n)  { std::cout << "float" << endl; }
void foo(double n) { std::cout << "double" << endl; }
void foo(...)      { std::cout << "..." << endl; }
//template<typename T>
//void foo(T n)      { std::cout << "T" << endl; }

int main()
{
	float f = 3.4f;
	foo(f); // 1. exactly matching - float
			// 2. template 사용해서 float 버전 생성 - T
			// 3. promotion (데이타 손실이 없는 변환)
			//						- double
			// 4. standard conversion(데이타 손실이 있어도
			//	  float -> int 변환 가능 - int
			// 5. 마지막 선택이 가변인자
}

*/
void goo(int, int) {}		// 1
void goo(short, short) = delete;	// 2

int main()
{
	goo(1.3, 2.3); // 1을 선택할지 2를 선택할지 모른다는 에러

}

