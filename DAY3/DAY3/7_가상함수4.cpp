#include <iostream>

//�����Լ� ����   164page ~

void* animal_table[] = { RTTI����,
						&Animal::Cry,
						&Animal::Run };
class Animal
{
	void* vtptr = animal_table; // �����Ϸ��� �߰��� �ڵ�
	int age;
public: 
	
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------
void* dog_table[] = { RTTI����,
						&Dog::Cry,
						&Animal::Run };

class Dog : public Animal
{
	void* vtptr = dog_table;
	int color;
public:	
	virtual void Cry() {}
};


int main()
{
	Animal a;
	Dog    d;
	Animal* p = &d;
	p->Cry();  // p�� ����Ű�� ��ü�� �˸� �ȵǰ�.
				// �Լ��� �ּҵ� �˾ƾ� �Ѵ�.

			// p->vtptr[1]( ) �� ������ �˴ϴ�.
}


