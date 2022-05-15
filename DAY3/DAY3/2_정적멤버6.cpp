
//int global = 0; // 전역변수.

int x[1024];
//int y[1024] = { 0 };

template<typename T> 
class Car
{
public:
	static T cnt;
};
template<typename T> T Car<T>::cnt = T();
					// T() : zero initialization


int main()
{
//	Car c; // error. Car 는 타입(클래스)가 아니라 타입을 만드는
			// 틀(template )
	Car<int> c1; // ok.. Car<int> 는 타입 입니다.

	//Car::cnt = 10; // error
	Car<int>::cnt = 10; // ok.
	Car<double>::cnt = 10; // ok.
	// 결론 : Car => 타입을 만드는 틀
	//		  Car<T> =>  타입.(T는 int, double등..)
}


