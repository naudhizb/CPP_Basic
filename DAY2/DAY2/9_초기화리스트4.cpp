// 9_�ʱ�ȭ����Ʈ1    85page ~
#include <iostream>
// ���� ���� : �ʱ�ȭ ����Ʈ�� ���� ������ �ƴ϶�..
//      ��� ����Ÿ�� ���� ���� ��� �ʱ�ȭ �ȴ�. - 88 page
class Point
{
public:
	int x, y;

	Point() : y(0), x(y)
	{
	}
};
int main()
{
	Point pt;
	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




