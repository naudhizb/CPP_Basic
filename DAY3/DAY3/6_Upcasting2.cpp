// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
int main()
{
	// Upcasting Ȱ��/����
	std::vector<Dog*> v1;  // Dog �� �����ϴ� vector

	std::vector<Animal*> v1;  // ����(��� ����)�� �����ϴ�vector

	// ������ �����ϴ� �����̳ʸ� ����� �ִ�

}
