int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	// 방법 1. C 스타일 캐스팅
	double* p = (double*)&c;

	// 방법 2. C++ explicit 캐스팅(4개의 캐스팅) 활용
	double* p1 = reinterpret_cast<double*>(
						const_cast<int*>(&c)); // 해보세요..
}





