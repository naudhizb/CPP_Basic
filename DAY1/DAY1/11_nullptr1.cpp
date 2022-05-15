// 11_nullptr1.cpp    54 page

int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok

	// C++11. nullptr : 포인터 0
	int  n2 = nullptr; // error
	int* p2 = nullptr; // ok
}
