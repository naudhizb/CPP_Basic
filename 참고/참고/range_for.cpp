#include <iostream>
#include <vector>

int main()
{
	// begin �� ����� �Ϲ� �Լ��� 2���� ������ �ֽ��ϴ�.
	//std::vector<int> v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

	auto p1 = v.begin();  // �迭�϶��� �ȵ˴ϴ�.


	auto p2 = begin(v);   // �迭�� �����մϴ�. - C++11����

	for (auto n : v)
	{
		std::cout << n << std::endl;
	}


	// �� for ���� ����
	for (auto it = begin(v) : it != end(v) ; ++it)
	{
		auto n = *it;
		//------------------
		std::cout << n << std::endl;
	}
}


