// 139 page
// protected 생성자 : 자신의 객체는 생성할수 없지만(추상적 존재, abstract)
//	    파생 클래스의 객체는 생성할수 있게(구체적 존재, concrete) 하는 기술
class Animal 
{
protected:
	Animal() {}
};
class Dog : public Animal
{
};

int main()
{
	// 다음중 에러를 모두 고르세요
	Animal a; // 1. error
	Dog    d; // 2. ok
}

