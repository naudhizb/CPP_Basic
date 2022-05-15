// 8_������1
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main()
{
	Point pt1;			// 1
	Point pt2(0, 0);	// 2
	Point pt3{ 0, 0 };	// 2�� ������. C++11�� �ϰ����ʱ�ȭ.
						// ���� �ʱ�ȭ
	Point pt4 = { 0, 0 }; // 2��, ���� �ʱ�ȭ
	Point arr[5]; // 1�� ������ 5��.

	Point arr2[5] = { Point(0,0), {1,1} }; // 2�� 2ȸȣ��
											// 1�� 3ȸ ȣ��
					// C++98/03    C++11 ��Ÿ��

	Point* p; // ��ü �ƴ�. ������ ȣ�� �ȵ�.

	p = (Point*)malloc(sizeof(Point));  // ������ ȣ��ȵ�.
	free(p);

	p = new Point;  // �޸� �Ҵ� + 1�� ������ ȣ�� => ��ü ����
	delete p;

	p = new Point(1, 1); // 2�� ������,  new Point{1,1}
	delete p;
}


