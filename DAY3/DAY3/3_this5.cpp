#include <iostream>
#include <Windows.h> // windows �� �Լ���..

/*
// win32 api ���� ������ �Լ� ���
DWORD __stdcall foo(void* arg)
{
	return 0;
}
int main()
{
	CreateThread(0, 0, &foo, "A", 0, 0); // ������ �����Լ�
				// linux : pthread_create()
}
*/
// ������ ������ ��ü���⿡�� Ȱ���� ���ô�.
class Thread
{
	int data = 0;
	
public:
	void run() { CreateThread(0, 0, &threadMain, this, 0, 0); }

	// �ٽ� 1. �Ʒ� �Լ��� static ��� �Լ��� ����� ������
	//         ��Ȯ�� �˾ƾ� �մϴ�.
private:
	static DWORD __stdcall threadMain(void* arg)
	{
		//data = 20; // this->data = 20  �κ��ؾ� �ϴµ�
					// this �� ����.

		Thread* self = static_cast<Thread*>(arg);

		// ���� self�� this�Դϴ�.
		// self�� ����ϸ� ��� ����� ���� �����մϴ�.
		self->data = 10;

		return 0;
	}
};

int main()
{
	Thread t;
	t.run(); // �̼��� �����尡 �����Ǿ�� �մϴ�.
	
}

// �ٽ�.
// C������ callback �Լ�.  setTimer(1second, &foo)
// �� �ݵ�� �Լ� ����� ������ �ֽ��ϴ�.

// C++�� �������Ҷ�  callback �Լ��� static ��� �Լ��̾���մϴ�.

// static ��� �Լ������� this�� ��� ��� ����Ÿ�� ������ �ȵ˴ϴ�.
// this�� ����ϰ� �ϴ� �پ��� ����� �ֽ��ϴ�.




