class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	void foo()	{
		color = 0;	// 1
		cnt = 0;	// 2
		goo();		// 3
	}
	// 핵심 : static 멤버 함수 안에서는 static 멤버 데이타만 접근할수
	//        있다.
	static void goo()	{
		color = 0;	// 4. error
		cnt = 0;	// 5. ok
		foo();		// 6. error
	}
};
int Car::cnt;  // 초기값을 지정하지 않으면 0(전역변수의 특징과 동일)
int main()
{
	// 힌트 : static 멤버 함수는 객체가 없어도 호출할수 있습니다.
	Car::goo();
}