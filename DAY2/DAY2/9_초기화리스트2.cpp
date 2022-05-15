
// 클래스안에 const 멤버, 참조 멤버 등이 있다면 
// 반드시 초기화 리스트를 사용해야 한다. - 87 page

class Test
{
	int& r;
	int n = 0;    // C++98까지는 error. C++11 부터가능
	const int c = 10;
public:
	Test() {}
	Test(int a, int b) : n(a), c(b) // ok...
	{
		//n = a;
		//c = b; // ??error. 대입하는 코드 입니다.
	}
};
int main()
{
	Test t(1, 10);
	//const int c; // C 언어 : 경고, C++ : 에러.
}