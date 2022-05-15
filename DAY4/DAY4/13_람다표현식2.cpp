int main()
{
	auto f = [](int a, int b) { return a + b; };

	int n = f(1, 2);

	[](int a, int b) { return a + b; } (1, 2);
	// class xxx{};xxx()(1,2)

	// �� ������ ���� �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.
	class ClosureType
	{
	public:
		int operator()(int a, int b) { return a + b; }
	};
	//ClosureType obj; // �̸� �ִ� ��ü
	ClosureType();   // �̸� ���� ��ü(�ӽð�ü)
}