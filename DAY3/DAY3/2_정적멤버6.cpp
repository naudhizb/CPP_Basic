
//int global = 0; // ��������.

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
//	Car c; // error. Car �� Ÿ��(Ŭ����)�� �ƴ϶� Ÿ���� �����
			// Ʋ(template )
	Car<int> c1; // ok.. Car<int> �� Ÿ�� �Դϴ�.

	//Car::cnt = 10; // error
	Car<int>::cnt = 10; // ok.
	Car<double>::cnt = 10; // ok.
	// ��� : Car => Ÿ���� ����� Ʋ
	//		  Car<T> =>  Ÿ��.(T�� int, double��..)
}


