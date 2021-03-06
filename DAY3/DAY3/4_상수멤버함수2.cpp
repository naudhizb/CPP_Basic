// 핵심 : 상수 멤버 함수는 선택이 아닌 "필수문법" 입니다.
//       객체의 상태를 수정하지 않은 모든 멤버 함수(getter)는
//       반드시 상수 함수로 해야 합니다.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

	int getArea() const { return w * h; }
};
//void foo(Rect r) // call by value
void foo(const Rect& r) 
{
	int n = r.getArea(); //???
}

int main()
{
	Rect r(1, 1, 10, 10);
	int n = r.getArea(); // ok
	foo(r);
}



