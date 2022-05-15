// 8_예제1     152 page
#include <iostream>
#include <vector>

// 7. template method 디자인 패턴
//    변하지 않은 공통의 흐름은 기반 클래스가 비가상함수(public)으로
//    변해야 하는 부분은 가상함수(protected)로 해서 
//    파생클래스가 재정의 할수 있게 한다.

// 디자인 패턴의 이름은 "template method" 인데
// C++에서는 "NVI ( Non Virtual Interface )"라고도 부릅니다.


class Shape
{
public:
	int type;

	// 공통성과 가변성의 분리
	// 변하지 않은 코드에 숨어 있는 변하는 부분은 분리되어야 한다.
	// 변하는 것을 가상함수로 한다
protected:
	//virtual void DrawImp() const = 0; // 순수 가상함수
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

		// 생각해볼 문제.. 
		// 1. 객체의 생성과정을 OCP를 만족하게 할수 없을까?
		//			=> 추상 팩토리 패턴 또는 팩토리 메소드 패턴

		// 2. Undo/Redo 기능을 넣을수 없을까?
		//			=> Command 패턴

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);

		else if (cmd == 8)
		{
			std::cout << "몇번째 도형을 복사할까요 >>";
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




