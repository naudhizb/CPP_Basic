// 4_����1
#include <iostream>

// C++ �� C����� ���� ���� ������ ���� �������׽��ϴ�.
// ���� 18 page ~

struct Point 
{
	int x, y; 
};

int main()
{
	int n1 = 0b1; // 2���� ǥ���, C++11 ���� ����
	int n2 = 1'000'000; // digit separator, C++11����
					// ���� : ������ ���ͷ� ������ ' ��
					//      �����Ϸ��� ����

	struct Point p1; // C��� ��Ÿ��
	Point p2; // C++��� ��Ÿ��.

	//foo()
	int n3; // �Լ� �߰��� ���� ����. 
			// C89 : error
			// C99 : ok. 
			// C++ : ok.

}