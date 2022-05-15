// 1_���۷���2
#include <iostream>
// 43 page

// �����Ϳ� ���۷����� �뵵�� �����մϴ�.
// 1. "�ڵ� dereference �Ǵ� ������" �� ���۷��� �Դϴ�
// 2. �����ʹ� if ( p != nullptr ) �� �ʿ� ������
//    ���۷����� �ʿ� �����ϴ�. - ������ ���� ����.

// C++ ������ ������ ���� ���۷����� �� ���� ����մϴ�.

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1(a);		// call by value. ���� ���� �ȵ�
	inc2(&b);		// call by pointer. ���� ���� ����
	inc3(c);		// call by reference. ���� ���� ����

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	// ����� �Է��� �޾� �ö�
	scanf("%d", &a);  // 2��° ���ڰ� ������ �Դϴ�.
	cin >> a;		  // >> �Լ��� ���ڰ� ���� �Դϴ�.
}