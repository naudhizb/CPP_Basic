// www.cppreference.com
#include <iostream>
#include <list>   // ������Ʈ
#include <vector> // �����迭(���ӵȸ޸�)
#include <string>
#include <algorithm> // find ���� �Ϲ� �Լ���(�˰����̶��θ���)

int main()
{
	//std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	//std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::string s = "helloworld";

	// ������ �˰����� reverse �Դϴ�. ������ ������
	std::reverse(s.begin(), s.end());

	for (auto n : s)
		std::cout << n << std::endl;
}


