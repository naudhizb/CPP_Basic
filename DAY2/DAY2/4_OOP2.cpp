#include <iostream>

// 핵심 1. S/W 개발에 필요한 데이타 타입을 먼저 설계한다.

// 핵심 2. 타입을 만들때 상태를 나타내는 데이타와 
//		   상태를 조작하는 함수를 묶어 놓는다
//     C언어   : 구조체에는 데이타 만 가능
//     C++언어 : 구조체에 함수를 넣을수 있다.


// 복소수라는 타입을 먼저 설계하자.
struct Complex
{
	int real;
	int image;

};
Complex Add(Complex c1, Complex c2)
{
	Complex temp;
	temp.real  = c1.real  + c2.real;
	temp.image = c1.image + c2.image;
	return temp;
}
int main()
{
	Complex c1 = { 1,1 };
	Complex c2 = { 2,2 };
	Complex c3 = Add(c1, c2);
}