#include <iostream>

// 버전 5. 객체 초기화를 자동으로 - 생성자 문법

class Stack 
{
	int buff[10];
	int idx;
public:			
	// 생성자 : 클래스 이름과 동일한 함수.
	//		   반환타입을 표기 하지 않는다.
	//			객체를 생성하면 자동으로 호출된다.
	Stack() { idx = 0; }

	void push(int a) { buff[idx++] = a; }
	int  pop() { return buff[--idx]; }
};
int main()
{
	Stack s1;
	//s1.init();
	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}
