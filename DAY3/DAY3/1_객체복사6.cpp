// 1_객체복사6.. 
// 객체복사 1번 복사

#include <iostream>
#include <string>

// 되도록이면 char* 를 사용하지 말고 string을 사용하자.!
class People
{
	//int* buff;
	//std::vector<int> buff;
	std::string name;
	int   age;
public:
	People(std::string n, int a) : name(n), age(a)
	{
	}
};
int main()
{
	People p1("kim", 20);
	People p2 = p1;      // runtime error
}
