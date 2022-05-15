#include <iostream>

// reinterpret_cast : 포인터 <-> 포인터 변환(타입상관없음)
//					  포인터 <-> 정수 변환

int main()
{
	double d = 3.4;
	//int    n =  d; // ok
	int    n = reinterpret_cast<int>(d); // error

	//double* p2 = (double*)&n; // ok.
	//double* p2 = static_cast<double*>(&n); // error
	double* p2 = reinterpret_cast<double*>(&n); // ok

	// 주소 => 정수로 캐스팅  또는 정수를 주소로 캐스팅
	int x   = reinterpret_cast<int>(&n);  // ok
	int* p2 = reinterpret_cast<int*>(100);// ok
}

