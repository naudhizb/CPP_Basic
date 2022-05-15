#include <string>
#include <vector>
#include <list>    // 더블리스트

void f1(std::string s)      {}
void f2(std::vector<int> s) {}
void f3(std::list<int>   s) {}

int main()
{
	// std::string 의 생성자는 explicit 아님.
	std::string s1("hello");
	std::string s2 = "hello"; // ok
	f1("hello");

	// std::vector의 생성자는 explicit
	std::vector<int> v1(10); //10개 짜리 배열
	std::vector<int> v2 = 10; // error
	f2(10);	// error
}

// "webkit github"   => 웹브라우져(크롬같은)의 엔진

// source/wtf/wtf/Scope.h


