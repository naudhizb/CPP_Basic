// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>

class People
{
	std::string name;
	int    age;
};

class Student : public People  // 상속 ( inheritance )
{
	int    id;
};

class Professor : public People
{
	int    major;
};

int main()
{

}