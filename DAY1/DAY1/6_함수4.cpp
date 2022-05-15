// 6_함수4
// C++ 함수의 특징 4. 함수 템플릿
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
/*
#define MAKE_SQUARE(T) T square(T a) { return a* a;}

MAKE_SQUARE(int)
MAKE_SQUARE(double)
*/

// 전처리기가 아닌 컴파일러에 의한 코드 생성

// 컴파일러에게 함수가 아닌 함수를 만드는 틀을 알려준다.
template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);      // int square(int)함수 생성후. 호출
	square<double>(3.4); // double square(double)

	// 타입을 전달하지 않으면 함수 인자를 보고 타입을 결정한다
	square(3); //square<int>(3)
	square(3.4);

	printf("%p\n", &square); // error. square는 함수가 아니다
							// 함수의 틀(template) 이다
	printf("%p\n", &square<int>); // square<int>가 함수이름
}
// 33 page
