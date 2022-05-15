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
	// Upcasting 활용/장점
	std::vector<Dog*> v1;  // Dog 만 보관하는 vector

	std::vector<Animal*> v1;  // 동종(모든 동물)을 보관하는vector

	// 동종을 보관하는 컨테이너를 만들수 있다

}
