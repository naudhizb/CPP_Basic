#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

/*
map<string, string> m;
m["������"] = "mon"

bimap<string, string> bm;
bm.left[������] = "mon";

bm.right["mon"]
*/


//�ٽ� : �˰����� �����̳ʸ� �𸥴�.!

// ���. �˰��� �Լ��� ������ �̸��� ��� �Լ��� �ִٸ�
//      ����Լ��� �������!!!!

int main()
{
	// list�� �Ʒ� vectoró�� remove �Ϲ� �Լ� ������� ����
	// ��� �Լ��� �������.
	std::list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	v.remove(3); // �Ʒ� �ڵ庸�� ������.


	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// remove : ��Ҹ� ��� ���� �ȴ�
	auto p = std::remove(v.begin(), v.end(), 3);

	for (auto n : v)
		std::cout << n << " ";

	std::cout << std::endl;

	v.erase(p, v.end());

	for (auto n : v)
		std::cout << n << " ";
}

