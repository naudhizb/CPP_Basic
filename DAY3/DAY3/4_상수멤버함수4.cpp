#include <iostream>

// ���� : static ��� �Լ����� const�� ���ϼ� �����ϴ�.
//       ��ü���� ȣ�Ⱑ���ϹǷ�.

class Test
{
public:
	// �ٽ� : ��� ��� �Լ��� ����ο� ������ ��ο� const��
	//			�ٿ��� �մϴ�.  125 page
	void foo();
	void foo() const;
};
// ���ۿ��� "


void Test::foo()
{
	std::cout << __FUNCSIG__ << std::endl; 
}
void Test::foo() const 
{ 
	std::cout << __FUNCSIG__ << std::endl; 
}


int main()
{
	
}

