// 8_대입연산자

// 사용자가 만들지 않으면 컴파일러가 만들어 주는 것
// 1. 디폴트 생성자
// 2. 소멸자
// 3. 복사 생성자
// 4. 대입 연산자



class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	// 컴파일러는 아래와 같은 모양의 대입연산자를 제공해 줍니다.
	Point& operator=(const Point& p)
	{
		x = p.x;
		y = p.y;
		return *this;
	}
};
int main()
{
	Point p1(1, 2);
	Point p2(p1);   
	p2 = p1; 

	/*
	int n1 = 0;
	int n2 = 10;
	
	n1 == n2; // == 연산자 반환 타입은 ?  bool
	(n1 = n2) = 20;  // = 연산자의 반환값 n1 자신...
	*/
}
