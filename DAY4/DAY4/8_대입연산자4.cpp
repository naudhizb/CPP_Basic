
// 클래스가 생성자에서 자원을 할당하면

// => 대부분 _3_ 개의 멤버함수를 추가로 만들어야 한다.
// => 소멸자, 복사 생성자, 대입연산자  => rule of 3

// rule of 0
// vector, string 등의 타입을 사용하면 
// 소멸자/복사생성자/대입연산자를 제공하지 않아도 된다.
class Test
{
	//int* resource;
	std::vector<int> v;
public:
	//Test() { resource = new int[100]; }

	Test() :v(100) {}
};

// 구글   "android framework github"