// 5_constexpr3

int main()
{
	int n = 10;

	// const : 컴파일 시간/실행시간 상수 모두 가능
	const int c1 = n;  // ok
	const int c2 = 10; // ok

	// C++11. constexpr : 컴파일 시간 상수만 가능.
	constexpr int c3 = n;  // error
	constexpr int c4 = 10; // ok

}