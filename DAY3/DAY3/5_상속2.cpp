// 5_상속2

class Base  // base class, super class  , 기반 클래스
{
private:   // 자신의 멤버에서만 접근 가능
	int a;

protected: // 자신과 파생클래스에서 접근가능
	int b;

public:    // 어디서나 접근 가능.
	int c;
};

class Derived : public Base   // Derived class, subclass, 파생클래스
{
public:
	void foo()	{
		a = 0; // error. 기반 클래스의 private 멤버는
				// 파생클래스라도 접근할수 없다.
		c = 0; // ok
	}
};
int main()
{
	Base base;
	base.a = 0; // error
	base.c = 0; // ok
}