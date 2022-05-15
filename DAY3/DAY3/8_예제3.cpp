// 8_����1     152 page
#include <iostream>
#include <vector>

// 7. template method ������ ����
//    ������ ���� ������ �帧�� ��� Ŭ������ �񰡻��Լ�(public)����
//    ���ؾ� �ϴ� �κ��� �����Լ�(protected)�� �ؼ� 
//    �Ļ�Ŭ������ ������ �Ҽ� �ְ� �Ѵ�.

// ������ ������ �̸��� "template method" �ε�
// C++������ "NVI ( Non Virtual Interface )"��� �θ��ϴ�.


class Shape
{
public:
	int type;

	// ���뼺�� �������� �и�
	// ������ ���� �ڵ忡 ���� �ִ� ���ϴ� �κ��� �и��Ǿ�� �Ѵ�.
	// ���ϴ� ���� �����Լ��� �Ѵ�
protected:
	//virtual void DrawImp() const = 0; // ���� �����Լ�
	virtual void DrawImp() const
	{
		std::cout << "Shape Draw" << std::endl; 
	}
public:
	void Draw() const
	{
		std::cout << "mutex lock" << std::endl;
		DrawImp();
		std::cout << "mutex unlock" << std::endl;
	}

	virtual Shape* Clone() const { return new Shape(*this); }
};



class Rect : public Shape
{
public:
	Rect() { type = 1; }
protected:
	virtual void DrawImp() const override { std::cout << "Rect Draw" << std::endl; }

public:
	virtual Shape* Clone() const override { return new Rect(*this); }
};
class Circle : public Shape
{
public:
	Circle() { type = 2; }
protected:
	virtual void DrawImp() const override { std::cout << "Circle Draw" << std::endl; }

public:
	virtual Shape* Clone() const override { return new Circle(*this); }
};

class Triangle : public Shape
{
public:
	virtual void DrawImp() const override { std::cout << "Triangle Draw" << std::endl; }
};


int main()
{
	std::vector<Shape*> v;
	while (1)
	{
		int cmd;
		std::cin >> cmd;

		// �����غ� ����.. 
		// 1. ��ü�� ���������� OCP�� �����ϰ� �Ҽ� ������?
		//			=> �߻� ���丮 ���� �Ǵ� ���丮 �޼ҵ� ����

		// 2. Undo/Redo ����� ������ ������?
		//			=> Command ����

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);

		else if (cmd == 8)
		{
			std::cout << "���° ������ �����ұ�� >>";
			int k;
			std::cin >> k;

			v.push_back(v[k]->Clone());
		}
		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw();
		}
	}
}




