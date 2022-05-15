#include <string>
#include <vector>
#include <list>    // ������Ʈ

void f1(std::string s)      {}
void f2(std::vector<int> s) {}
void f3(std::list<int>   s) {}

int main()
{
	// std::string �� �����ڴ� explicit �ƴ�.
	std::string s1("hello");
	std::string s2 = "hello"; // ok
	f1("hello");

	// std::vector�� �����ڴ� explicit
	std::vector<int> v1(10); //10�� ¥�� �迭
	std::vector<int> v2 = 10; // error
	f2(10);	// error
}

// "webkit github"   => ��������(ũ�Ұ���)�� ����

// source/wtf/wtf/Scope.h


