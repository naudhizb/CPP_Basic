#include <iostream>
//#include "StackT.h"
#include <stack>  // C++ 표준 스택

int main()
{
	std::stack<int> s;
	s.push(10);
	s.push(20);
	std::cout << s.top() << std::endl; //꺼내기만
	s.pop(); // 제거만, 반환은 안함(void)
	std::cout << s.top() << std::endl;
}

// 구글에서   "tensorflow github"

// tensorflow/core/platform/

