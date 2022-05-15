// 10_�ݺ���1     220 page
#include <iostream>
#include <list>

template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;
}

int main()
{
	// ����ũ�� ����Ʈ
	// �迭 ó�� �ʱ�ȭ �ؼ� ����ϸ� �˴ϴ�.
	std::list<int> s = { 1,2,3,4,5 };

	// �ݺ���(iterator) : �����̳��� ��Ҹ� ����Ű�� �����Ϳ�Ȱ��
	//		��ü. �����̳��� ������ ������� ������ ���(++)����
	//      �̵�
	auto p1 = s.begin(); // ó����Ҹ� ����Ű�� �ݺ���
	auto p2 = s.end();   // ������ ���� ���

	std::cout << *p1 << std::endl;
	++p1;
	std::cout << *p1 << std::endl;


	auto ret = xfind(s.begin(), s.end(), 7 );

	if (ret == s.end())
		std::cout << "����" << std::endl;
	else
		std::cout << *ret << std::endl;
}



