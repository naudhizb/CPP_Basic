// 2_�߻�Ŭ����    168 page
#include <iostream>
// �߻� Ŭ���� : ���� �����Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : ��ü�� ����� ����.
// �ǵ� : Ư�� �Լ��� �����θ� �����϶�� ���� �ϴ� ����.
class Shape
{
public:
	virtual void Draw() = 0; // ���� �����Լ�(�����ΰ� ����.)
							 // pure virtual function
};
class Rect : public Shape   // Draw()�� �����θ� �������� ������
{							// ���� �߻� Ŭ�����̴�.
};
int main()
{
	//Shape s; // error
	Rect  r;
}
