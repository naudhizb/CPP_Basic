// const_cast : 

int main()
{
	const int c = 10;

	int* p1 = &c;       // error
	int* p2 = (int*)&c; // ok
	int* p3 = static_cast<int*>(&c);      // error
	int* p4 = reinterpret_cast<int*>(&c); // error. 
						// 상수성제거 안됨.

	int* p5 = const_cast<int*>(&c); // ok..
						// 동일 타입의 const 속성 제거
}