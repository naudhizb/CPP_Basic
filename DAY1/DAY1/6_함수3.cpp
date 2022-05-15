// C++ 함수 특징 3. inline   .. 32page

// 인라인 함수 : 호출이 아니라 기계어 코드를 치환해 달라는의미
// 장점 : 빠르다.
// 단점 : 여러번 치환되면 목적코드(실행파일 크기)가 커질수 있다

       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }
constexpr int add3(int a, int b) { return a + b; }

int main()
{
	int n1 = add1(1, 2);  // 호출
	int n2 = add2(1, 2);  // 치환
	int n3 = add3(1, 2);  // 컴파일 시간에 실행

	int arr[add3(1, 2)];
	arr[0] = 10;
}
// cl  6_함수3.cpp			=> 실행파일 생성
// cl  6_함수3.cpp   /FAs    => 6_함수3.asm 생성
// cl  6_함수3.cpp   /FAs /Ob1

// /Ob1 : 인라인 치환을 적용해 달라.
// /FAs : 현재 C++ 소스의 어셈소스을 만들어달라
// /O2  : 속도를 위한 최적화 옵션


// notepad 6_함수3.asm   