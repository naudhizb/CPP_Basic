// 7_�����Լ�1  144 page ~

#include <iostream>

class Animal
{
public:
	virtual void Cry() { std::cout << "Animal Cry" << std::endl; }
};
class Dog : public Animal
{
public:
	// �Լ� override : ��� Ŭ������ �Լ��� �Ļ� Ŭ������
	//				  ������ �ϴ� ��
	virtual void Cry() { std::cout << "Dog Cry" << std::endl; }
};
int main()
{
	Animal a; a.Cry(); // 1
	Dog    d; d.Cry(); // 2

	Animal* p = &d;

	//int n; 
	//cin >> n;
	//if (n == 0) p = &a;

	p->Cry();  // 1 ? 2
}

// �Լ� ���ε� : p->Cry() �� � �Լ��� �����Ұ��ΰ� ?

// 1. static binding : ������ �ð��� �����Ϸ��� ����.
//			�����Ϸ��� ������ �ð��� ������ Ÿ�Թۿ� �˼�����.
//			������ Ÿ������ ȣ��.  Animal::Cry()
// ealry binding. ������. �������� �ʴ�.
//			C++, C#

// 2. dynamic binding : ������ �ð��� p�� ����Ű�� �޸𸮸�
//			�����ϴ� ���� �ڵ� ����
//			����� �޸� ������ ȣ��.  �޸𸮿��ִ°�ü::Cry()
// late binding. ������. �����̴�.
//          java. swift, objective-c, kotlin
//			C++/C#�� virtual �Լ�




