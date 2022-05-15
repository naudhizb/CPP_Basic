// 5_constexpr4

// C++11 에서 추가된 constexpr의 용도
// 1. constexpr 상수
// 2. constexpr 함수
// 3. constexpr if

 //int g = 10;
// constexpr 함수 : 함수 인자로 전달된 값을 컴파일 시간에 
//				알수있다면 함수 수행도 컴파일 시간에 수행.
constexpr int add(int a, int b) { return a + b; }

int main()
{
	int a = 1, b = 2;

	int arr1[ add(1, 2) ]; // ok
//	int arr2[ add(a, b) ]; // error

	int n3 = add(a, b); // ok.. a, b는 컴파일 할때 값을 
						// 알수없으므로실행시간에 수행되는 함수
}

