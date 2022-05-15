// 1_레퍼런스4.   100 page

// 핵심 : 함수가 참조를 반환하면 등호에 왼쪽에 놓을수 있습니다.

int x = 0;
int foo()  { return x; } // 값 타입 반환 : 메모리에 있는 값 반환
int& goo() { return x; } // 참조 반환 : 값이 아닌 메모리 반환

// 주의 : 절대 지역변수를 참조 반환 하면 안됩니다.
int& hoo() 
{
	int n = 0; 
	return n; 
}

int main()
{
	int n1 = 0, n2 = 0;
	n2 = n1; // n1이 오른쪽에 있다. 컴파일러는 n1의 값을 
			 // 가져오는 코드 생성
	n1 = 10; // n1이 왼쪽에 있다. 컴파일러는 n1의 주소를
			 // 사용하는 코드 생성

	foo() = 20; // error
	goo() = 20; // ok.. 
}

// google 에서 C++ core guideline
// 2번째 링크