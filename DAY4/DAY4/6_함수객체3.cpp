// 6_�Լ���ü2
#include <iostream>
#include <bitset>   // STL bitset

// �Լ� ��ü�� ���� - 199 �Ʒ�
// 1. ���¸� ������ �Լ�(��� ����Ÿ�� �ִٴ� �ǹ�)

// 2. Ư����Ȳ������ �Լ� ���� �Լ���ü�� ������.
//    (�ζ��� ġȯ�� �� �ߵȴٴ� �ǹ�)

class URandom
{
	std::bitset<10> bs;
public:
	URandom() { bs.set(); } // ��� 1��

	int operator()()
	{
		if (bs.none()) return -1; // ��� 0�̸�

		int v = 0;
		while (!(bs.test(v = rand() % 10)));

		bs.reset(v);

		return v;
	}
};

int main()
{
	URandom urand;

	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}


