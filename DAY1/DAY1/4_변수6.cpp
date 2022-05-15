// 4_변수6.cpp   25 page 
struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	int x = pt.x;
	int y = pt.y;

	// C++17. structure binding
	// VC++ 2017, 2019 : 디폴트로 C++14까지 지원
	//				/std:c++17 또는 /std:c++latest

	// g++ 8.x, 9.x : 디폴트로 C++14까지 지원
	//				-std=c++17

	auto[a, b] = pt; // 반드시 auto 만 가능

	int arr[3] = { 1,2,3 };

	auto[a1, a2, a3] = arr;  // ok

	// 64 bit 타입
	long long n3; // 64 bit 정수.
}