// 1_���۷���3. 45 page
struct BigData
{
	int buff[1024];
};
// call by value �� Ư¡ : ���� �������� �ʰڴٴ� �ǵ�.
//                       ������, ���纻�� �����ǹǷ�
//						�޸� �δ��� ũ��.
//void foo(BigData n)
// �ٽ� : call by value ��� const &�� ����.!
void foo(const BigData& n)
{
	//n.buff[0] = 10; // error. n�� ���
}
int main()
{
	//int x = 100;
	BigData x;

	// � �Լ����� ������ ���� ���� �����ϸ� �ȵȴٸ�
	foo(x);

}

// C++���� �Լ� ���� �����
// 1. ������ ���� �����ϰ� ������ - ������ �Ǵ� ���۷���
void foo(int* p) {}
void foo(int& r) {}

// 2. ������ ���� �������� ������
// A. ���ڰ� user type �϶� - �Ϲ������� ũ�Ⱑ ���� �����Ƿ�
//					call by value ���ٴ� const ������ ����
void foo(const UserType& t) {}

// B. ���ڰ� primitive type �϶�
void foo(int t) {}