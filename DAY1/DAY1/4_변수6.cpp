// 4_����6.cpp   25 page 
struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	int x = pt.x;
	int y = pt.y;

	// C++17. structure binding
	// VC++ 2017, 2019 : ����Ʈ�� C++14���� ����
	//				/std:c++17 �Ǵ� /std:c++latest

	// g++ 8.x, 9.x : ����Ʈ�� C++14���� ����
	//				-std=c++17

	auto[a, b] = pt; // �ݵ�� auto �� ����

	int arr[3] = { 1,2,3 };

	auto[a1, a2, a3] = arr;  // ok

	// 64 bit Ÿ��
	long long n3; // 64 bit ����.
}