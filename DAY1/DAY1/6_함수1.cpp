// 6_함수1.cpp  28 page ~
// C++함수의 특징 1. 디폴트 파라미터

// 주의 사항 1. 반드시 마지막 인자(오른쪽) 부터 차례대로
//				지정해야 한다.

// 주의 사항 2. 함수를 선언과 구현으로 분리할 경우 
//			   선언부에만 표기한다. (28 page 아래)


void foo(int a = 0, int b, int c = 0); // error

void foo(int a  = 0, int b = 0 , int c = 0);

int main()
{
	foo(1, 2, 3);
//	foo(1, 2);
	//foo(1);
	//foo();
}

void foo(int a/* = 0*/, int b /*= 0*/, int c/* = 0 */)
{
}
