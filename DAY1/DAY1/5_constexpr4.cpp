// 5_constexpr4

// C++11 ���� �߰��� constexpr�� �뵵
// 1. constexpr ���
// 2. constexpr �Լ�
// 3. constexpr if

 //int g = 10;
// constexpr �Լ� : �Լ� ���ڷ� ���޵� ���� ������ �ð��� 
//				�˼��ִٸ� �Լ� ���൵ ������ �ð��� ����.
constexpr int add(int a, int b) { return a + b; }

int main()
{
	int a = 1, b = 2;

	int arr1[ add(1, 2) ]; // ok
//	int arr2[ add(a, b) ]; // error

	int n3 = add(a, b); // ok.. a, b�� ������ �Ҷ� ���� 
						// �˼������Ƿν���ð��� ����Ǵ� �Լ�
}

