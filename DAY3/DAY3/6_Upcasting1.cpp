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
	Dog     dog;
	Dog*    p1 = &dog; // ok
	Animal* p2 = &dog; // ok. �Ļ�Ŭ������ �ּҸ�
					// ��� Ŭ���� Ÿ���� �����Ϳ� �������ִ�

	//p2->color = 10; // error. Animal* �δ� Animal�� �����
					// ���� �����ϴ�.

	static_cast<Dog*>(p2)->color = 10;
}

// �ٽ� 1. ��� Ŭ���������Ϳ� �Ļ�Ŭ���� �ּ� ������ �ִ�.
//      2. ������ �Ļ�Ŭ���� ������ ������� ���� �ȵ�.
//      3. �����Ϸ��� �ٽ� �Ļ�Ŭ���� Ÿ������ ĳ�����ؾ� �Ѵ�
