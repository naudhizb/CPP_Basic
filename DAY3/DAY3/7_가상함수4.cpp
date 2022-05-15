#include <iostream>

//가상함수 원리   164page ~

void* animal_table[] = { RTTI정보,
						&Animal::Cry,
						&Animal::Run };
class Animal
{
	void* vtptr = animal_table; // 컴파일러가 추가한 코드
	int age;
public: 
	
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------
void* dog_table[] = { RTTI정보,
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
	p->Cry();  // p가 가리키는 객체만 알면 안되고.
				// 함수의 주소도 알아야 한다.

			// p->vtptr[1]( ) 로 컴파일 됩니다.
}


