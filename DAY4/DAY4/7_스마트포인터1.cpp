// 7_����Ʈ������1    201 page

#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car()    {	std::cout << "~Car" << std::endl;	}
};
// ���� : ������ ��ü�� �ٸ� Ÿ���� ������ ��Ȱ�� �ϴ� ��

// ���� : -> �����ڸ� ������ �ؼ� ������ ó�� ���̰� �ϴ� ��

// ���� : raw pointer�� �ƴ� ��ü �Դϴ�.
//		 ����/����/����/�Ҹ��� ������ �߰��� ����� �����Ҽ� �ֽ��ϴ�
//       ��) �Ҹ��ڿ��� delete ���.

// �Ʒ� �ڵ尡 �ٽ� �Դϴ�.
template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	~Ptr() { delete obj; }
	T* operator->() { return obj; }
};
int main()
{
	Ptr<Car> p = new Car;// Ptr p( new Car )

	p->Go();		// (p.operator->()) Go() �� ����ε�
					// (p.operator->())->Go() �� �ؼ��˴ϴ�
}

