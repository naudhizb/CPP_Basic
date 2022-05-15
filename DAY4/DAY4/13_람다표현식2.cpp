int main()
{
	auto f = [](int a, int b) { return a + b; };

	int n = f(1, 2);

	[](int a, int b) { return a + b; } (1, 2);
	// class xxx{};xxx()(1,2)

	// 위 한줄을 보고 컴파일러는 아래 코드를 생성합니다.
	class ClosureType
	{
	public:
		int operator()(int a, int b) { return a + b; }
	};
	//ClosureType obj; // 이름 있는 객체
	ClosureType();   // 이름 없는 객체(임시객체)
}