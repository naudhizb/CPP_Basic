#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main()
{
	//std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };
	std::list<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// �����ϴ� �˰����� std::sort  �Դϴ�. v�� ������ ������
	std::sort( v.begin(), v.end() );

	for (auto n : v)
		std::cout << n << std::endl;
}
// ��� Ȯ���� ���ź��� v�� list�� ������ ������.



