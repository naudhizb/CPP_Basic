// 5_���1.cpp   132page ~
#include <iostream>
#include <string>

class People
{
	std::string name;
	int    age;
};

class Student : public People  // ��� ( inheritance )
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