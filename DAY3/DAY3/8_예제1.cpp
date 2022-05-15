// 8_예제1     152 page
#include <iostream>
#include <vector>

// 파워포인트 같은 프로그램을 생각해 봅시다.
// 1. 모든 도형을 타입화 하면 편리하다.
// 2. 모든 도형의 공통의 기반 클래스가 있다면 모든 도형을 묶을수
//    있다.

// 3. 모든 도형의 공통의 특징은 반드시 기반 클래스에 있어야 한다.
//    그래야  Shape* 로 묶어서 사용할수 있다.

// 4. 파생 클래스가 재정의 하게 되는 모든 함수는 반드시 
//    가상함수로 만들어야 한다. - 156p
//    "가상함수가 아닌 함수는 재정의 하지 말라" - C++격언

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
}// 왜 에러일까요 ?



