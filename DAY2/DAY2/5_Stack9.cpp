#include <iostream>
//#include "StackT.h"
#include <stack>  // C++ ǥ�� ����

int main()
{
	std::stack<int> s;
	s.push(10);
	s.push(20);
	std::cout << s.top() << std::endl; //�����⸸
	s.pop(); // ���Ÿ�, ��ȯ�� ����(void)
	std::cout << s.top() << std::endl;
}

// ���ۿ���   "tensorflow github"

// tensorflow/core/platform/

