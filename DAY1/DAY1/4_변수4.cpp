// 21 page ~

int main()
{
	int x[3] = { 1,2,3 };

	//int n = x[0];

	auto n = x[0]; // �캯�� ǥ������ ������ �º��� Ÿ�� ����
					// �����Ϸ��� ����. ����� �������� �����ϴ�.
					// C++11

	decltype(n) n2; // () ���� ǥ���İ� ������ Ÿ��
					// C++11

	auto a1 = x; // a1�� Ÿ���� ?  
				// 1. int a1[3]    2. int*
				// int a1[3] = x;  // error
				// int* a1 = x;    // ok

	decltype(x) d1; // int d1[3]
	decltype(x) d2  = x; // int d1[3] = x �̹Ƿ� error

	// 22 page ���� �Ʒ� 

	//decltype(x[0]) d3; // error.  d3 int&
}