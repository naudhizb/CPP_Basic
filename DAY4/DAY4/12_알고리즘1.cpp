// 12_�˰���1       227
#include <iostream>
#include <list>
#include <algorithm>

// ������(predicator) : bool�� ��ȯ�ϴ� �Լ�
bool foo(int a) { return a % 3 == 0; }

int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7 };

	// find �˰����� ���� generic �ұ� ?
	// �־��� �������� ù��° ������ 3�� ����� ã�� �ʹ�.
	//auto p = std::find(s.begin(), s.end(), 3); // ?

	// �˰����� ������ ����
	auto p = std::find_if(s.begin(), s.end(), foo);

	std::cout << *p << std::endl;

	
	// C++11 ���� lambda expression ��밡��
	// �Լ� �̸��� �ʿ��� �ڸ��� �Լ� ������ ����.
	auto p2 = std::find_if(s.begin(), s.end(), 
		[](int a) {return a % 3 == 0;	});

}




