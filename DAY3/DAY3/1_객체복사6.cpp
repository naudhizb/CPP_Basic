// 1_��ü����6.. 
// ��ü���� 1�� ����

#include <iostream>
#include <string>

// �ǵ����̸� char* �� ������� ���� string�� �������.!
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
