// 185page

// 1. 인자중 하나 이상은 반드시 사용자 정의 타입이어야 한다.
int operator+(int a, int b) // error. a, b 모든 primitive
{
	return a - b;
}
int n = 5 + 2; // ?? 3 ?
// 2. 인자의 갯수를 변경할수 없다. 디폴트 인자도 안된다.
Point operator+(Point p1, int a, int b); // error
Point operator+(Point p1, int a = 10); // error

// 3. 우선순위 변경안됨
Point p3 = p1 + p2 * p3; // * 가 먼저 실행

// 4. 새로운 연산자를 만들수 없음.
Point operator*&(Point p1, Point p2) // error

// 5. 대부분 재정의 가능
//    불가능한것 :   ::    ?   .   .*   는 안됨

// 6. =, (), [], -> 는 멤버함수로만 가능하다.

// 7. 멤버 vs 일반 => 권장일뿐 절대적 규칙 아님
//    객체의 상태가 변경되면 : 멤버 함수
//    변경되지 않으면 : 일반함수

//  ++p1;
//  p1 + p2;


