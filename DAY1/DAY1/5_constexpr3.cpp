// 5_constexpr3

int main()
{
	int n = 10;

	// const : ������ �ð�/����ð� ��� ��� ����
	const int c1 = n;  // ok
	const int c2 = 10; // ok

	// C++11. constexpr : ������ �ð� ����� ����.
	constexpr int c3 = n;  // error
	constexpr int c4 = 10; // ok

}