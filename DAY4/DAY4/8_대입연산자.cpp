// 8_대입연산자

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};
int main()
{
	Point p1(1, 2); // ok. 생성자
	Point p2(p1);   // ok. 복사 생성자 - 사용자가 만들지 않으면
					// 컴파일러가 제공

	p2 = p1; // p2.operator=(p1) 가 필요하다.
			// 사용자가 만들지 않으면 컴파일러가 제공해 준다.
}
