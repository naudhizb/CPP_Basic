// 7_접근지정자    74page ~

// 멤버 데이타를 private 에 놓아서
// 외부의 잘못된 접근으로 객체의 상태가 불안해 지는
// 것을 막는다!
// "캡슐화(encapsulation)", "정보 은닉"

struct Bike
{
private:
	int gear;

public:
	Bike(int n = 1) { if ( n > 0) gear = n; }

	void changeGear(int n)  
	{	
		if ( n > 0 )
			gear = n;	
	}
};

int main()
{
//	Bike b = { 5 }; // C 스타일의 초기화는 멤버 데이타가
					// public 인 경우만 가능..

	Bike b(5);

	//b.gear = -10;
	b.changeGear(-10);
}
