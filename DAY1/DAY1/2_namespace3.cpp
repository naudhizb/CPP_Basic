// 2_namespace3.cpp - 9page ����
#include <algorithm>
using namespace std;

int count = 0;

int main()
{
//	printf("%d\n", count); // std::count() �Լ� ����
						   // �������� count ���� ��ȣ�ϴ�
	printf("%d\n", ::count);

	//int n = min(3, 2); // C++ ǥ�� �Լ�. algorithm ��� �ʿ�
	int n = std::min(3, 2);
	int n2 = min(3, 2);
}
// �Ʒ� ó�� 2���� ���Ͽ��� ���� namespace�� ����ص� �˴ϴ�.
// �̰�� �浹�� �ƴմϴ�.
// ����, "namespace �� �����ִ�" ��� ǥ���մϴ�.
// a.h
namespace Audio
{
	//..
	void foo() {}
}
// b.h
namespace Audio
{
	//..
	void foo() {}
}
#include "a.h"
#include "b.h"