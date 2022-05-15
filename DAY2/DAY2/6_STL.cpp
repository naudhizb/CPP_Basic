// 6_STL
#include <iostream>
#include <stack>
#include <vector>
#include <string>  

int main()
{
//	char s1[10] = "hello";
//	char s2[10] = "hello";
//	if (s1 == s2) {}

	// C++ string Ŭ���� - ���ڿ��� �ٷ�� Ÿ��
	std::string s1 = "hello";
	std::string s2 = "hello";
	if (s1 == s2) {} // ok

	// ���� �迭
	std::vector<int> v(10, 0); // 10���� 0���� �ʱ�ȭ
	v[0] = 3;		// ������ �迭�� ����
	v.resize(15);	// ũ�� ���浵 ����

	for (auto& n : v)
		std::cout << n << std::endl;
}
// C++���� ����
// 1. C�� �ٸ� C++ ����  - ����
// 2. �ϳ��� Ŭ������ ����� �� �ʿ��� ���� - ����
// 3. ������� Ŭ������ �� ����ϴ� ��� - �����
// 4. �ϳ��� Ŭ������ �ƴ� ���α׷� ��ü�� ��ü�������� ����
//		=> ��� ������ �˾ƾ� �Ѵ�.   "������"


