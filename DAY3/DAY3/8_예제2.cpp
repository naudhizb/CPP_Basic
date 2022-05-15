// 8_����1     152 page
#include <iostream>
#include <vector>

// 5. ���Ȯ�忡 �����ְ�(Open, Ŭ����/�Լ�/����� ���߿� �߰��ǵ�)
//    �ڵ� �������� �����־��(Close, ���� �ڵ�¼��� �Ǹ� �ȵȴ�)
//    �� �̷�(Principle)
//    OCP( Open Close Principle)

//    ��ü���� ������ 5���� ��Ģ
//    SRP, OCP, LSP, ISP, DIP ( ���ڷ� SOLID )

// 6. Prototype ������ ����
//	=> ������ �����ϴ� ��ü�� ���縦 ���ؼ� ���ο� ��ü�� ����� ����
//     Clone �����Լ�
//     java�� �ֻ��� Ŭ�������� clone() �Լ��� �ֽ��ϴ�.
//     IOS ���̺귯������ copy()�����Լ��� �ֽ��ϴ�.




class Shape
{
public:
	int type;
	virtual void Draw() { std::cout << "Shape Draw" << std::endl; }

	// �ڽ��� ���纻�� ����� �����Լ��� Ȱ�뵵�� ����.
	virtual Shape* Clone() { return new Shape(*this); }
};



class Rect : public Shape
{
public:
	Rect() { type = 1; }
	virtual void Draw() { std::cout << "Rect Draw" << std::endl; }
	virtual Shape* Clone() { return new Rect(*this); }
};
class Circle : public Shape
{
public:
	Circle() { type = 2; }
	virtual void Draw() { std::cout << "Circle Draw" << std::endl; }
	virtual Shape* Clone() { return new Circle(*this); }
};

class Triangle : public Shape
{
public:
	virtual void Draw() { std::cout << "Triangle Draw" << std::endl; }
};


int main()
{
	std::vector<Shape*> v;
	while (1)
	{
		int cmd;
		std::cin >> cmd;
		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);

		else if (cmd == 8)
		{
			std::cout << "���° ������ �����ұ�� >>";
			int k;
			std::cin >> k;

			// k��° ���� ������ ���纻�� �����ؼ� v�� �߰��մϴ�.

			v.push_back(v[k]->Clone());// ������!!
									// OCP�� �����մϴ�.


			/*
			switch (v[k]->type)
			{
			case 1: v.push_back(new Rect(*v[k])); break;
			case 2: v.push_back(new Circle(*v[k])); break;
			}
			*/
		}
		





		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw(); // ������(polymorphism)
						// ���� �Լ� ȣ�� ���� 
						// ��Ȳ(��ü)�� ���� �ٸ� �Լ� ȣ��
		}
	}
}
// cafe.naver.com/cppmaster



