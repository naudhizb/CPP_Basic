// 1_°´Ã¼º¹»ç.cpp   102 page ~
#include <iostream>
class People
{
	char* name;
	int   age;
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~People() { delete[] name; }
};
int main()
{
	People p1("kim", 20);
	People p2 = p1;      // runtime error
}
