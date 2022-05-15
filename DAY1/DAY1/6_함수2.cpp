#include <cstdio>
// 6_함수2 
// C++ 함수의 특징 2. 함수 오버로딩
// 인자의 갯수가 다르거나 인자의 타입이 다르면 동일한 이름의
// 함수를 2개이상 만들수 있다.
//#define SQUARE(x) ((x)*(x))
//SQUARE(++n);
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);

	printf("%p\n", &square); // error
	printf("%p\n", (int(*)(int)) &square); // ok
}
// ok
void f1(int);
void f1(double);

// error. 반환타입만 다른 경우 오버로딩 안됨.
void f2(int);
int  f2(int);

// ok
void f3(int a);
void f3(int a, int b);

// error. 디폴트 값에 주의!
void f4(int a);
void f4(int a, int b = 0);

f4(5);
