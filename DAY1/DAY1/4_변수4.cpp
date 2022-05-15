// 21 page ~

int main()
{
	int x[3] = { 1,2,3 };

	//int n = x[0];

	auto n = x[0]; // 우변의 표현식을 가지고 좌변의 타입 결정
					// 컴파일러가 결정. 실행시 성능저하 없습니다.
					// C++11

	decltype(n) n2; // () 안의 표현식과 동일한 타입
					// C++11

	auto a1 = x; // a1의 타입은 ?  
				// 1. int a1[3]    2. int*
				// int a1[3] = x;  // error
				// int* a1 = x;    // ok

	decltype(x) d1; // int d1[3]
	decltype(x) d2  = x; // int d1[3] = x 이므로 error

	// 22 page 제일 아래 

	//decltype(x[0]) d3; // error.  d3 int&
}