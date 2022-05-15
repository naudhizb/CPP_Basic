// 6_함수7
// C++함수 특징6.  후위 반환 타입  37 page

// suffix return type( trailing return type)

//int square(int a)

auto square(int a) -> int   // C++11 부터 나온 새로운 함수 모양
{
	return a * a;
}
int main()
{
	square(3);
}