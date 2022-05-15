// 8_����1     152 page
#include <iostream>
#include <vector>

// �Ŀ�����Ʈ ���� ���α׷��� ������ ���ô�.
// 1. ��� ������ Ÿ��ȭ �ϸ� ���ϴ�.
// 2. ��� ������ ������ ��� Ŭ������ �ִٸ� ��� ������ ������
//    �ִ�.

// 3. ��� ������ ������ Ư¡�� �ݵ�� ��� Ŭ������ �־�� �Ѵ�.
//    �׷���  Shape* �� ��� ����Ҽ� �ִ�.

// 4. �Ļ� Ŭ������ ������ �ϰ� �Ǵ� ��� �Լ��� �ݵ�� 
//    �����Լ��� ������ �Ѵ�. - 156p
//    "�����Լ��� �ƴ� �Լ��� ������ ���� ����" - C++�ݾ�

class Shape
{
public:
	virtual void Draw() { std::cout << "Shape Draw" << std::endl; }
};

class Rect : public Shape
{
public:
	virtual void Draw() { std::cout << "Rect Draw" << std::endl; }
};
class Circle : public Shape
{
public:
	virtual void Draw() { std::cout << "Circle Draw" << std::endl; }
};
int main()
{
	std::vector<Shape*> v;
	while (1)
	{
		int cmd;
		std::cin >> cmd;
		if      (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw();
		}
	}
}// �� �����ϱ�� ?



