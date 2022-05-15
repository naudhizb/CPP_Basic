// 8_예제1     152 page
#include <iostream>
#include <vector>

// 5. 기능확장에 열려있고(Open, 클래스/함수/모듈이 나중에 추가되도)
//    코드 수정에는 닫혀있어야(Close, 기존 코드는수정 되면 안된다)
//    는 이론(Principle)
//    OCP( Open Close Principle)

//    객체지향 설계의 5가지 원칙
//    SRP, OCP, LSP, ISP, DIP ( 약자로 SOLID )

// 6. Prototype 디자인 패턴
//	=> 기존에 존재하던 객체의 복사를 통해서 새로운 객체를 만드는 패턴
//     Clone 가상함수
//     java의 최상위 클래스에는 clone() 함수가 있습니다.
//     IOS 라이브러리에는 copy()가상함수가 있습니다.




class Shape
{
public:
	int type;
	virtual void Draw() { std::cout << "Shape Draw" << std::endl; }

	// 자신의 복사본을 만드는 가상함수는 활용도가 높다.
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
			std::cout << "몇번째 도형을 복사할까요 >>";
			int k;
			std::cin >> k;

			// k번째 만든 도형의 복사본을 생성해서 v에 추가합니다.

			v.push_back(v[k]->Clone());// 다형성!!
									// OCP를 만족합니다.


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
				p->Draw(); // 다형성(polymorphism)
						// 동일 함수 호출 식이 
						// 상황(객체)에 따라 다른 함수 호출
		}
	}
}
// cafe.naver.com/cppmaster



