// 7_스마트포인터2
#include <iostream>
#include <memory>   // C++ 표준 스마트 포인터

class Car
{
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};
int main()
{
//	std::shared_ptr<Car> p1 = new Car; // error
	std::shared_ptr<Car> p2(new Car);  // ok.. explicit 생성자

	// p2는 Car* 라고 생각하면 됩니다.
	p2->Go();
	(*p2).Go(); // p2.operator*()가 재정의 되어 있습니다.
}
// 1990년대 말: 스마트포인터개념 등장
// boost 라이브러리에서 shared_ptr을 제공하기 시작
// C++11 에서 C++공식 표준으로 채택됨.



