// 6_함수5
// C++ 함수 특징 5. 함수 삭제. C++11에서 추가된 기능
// 35 page

int add(int a, int b)
{
	return a + b;
}
// 36 page 아래 표
// 함수를 제공하지 않으면 : 인자의 암시적 변환에 의해서 
//						동일이름의 다른함수 호출 가능

// 함수를 선언만 제공 : 사용했을때 link    에러 발생
// 함수를 삭제 할때   : 사용했을때 compile 에러 발생

//double add(double a, double b); // 핵심. 선언만 제공

double add(double a, double b) = delete; // C++11의 함수삭제
										// 문법
int main()
{
	add(1, 2);
	add(2.3, 3.2); // compile error. 삭제된 함수 사용
}
