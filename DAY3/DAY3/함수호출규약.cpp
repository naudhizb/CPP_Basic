// �Լ�ȣ��Ծ�( Calling Convention)
// => �Լ� ���ڸ� ��� ������ ���ΰ� ?
/*
void            f1(int a, int b) { } // __cdecl �� �����Ȱ�
void __cdecl    f2(int a, int b) { } // ret 
void __stdcall  f3(int a, int b) { } // ret 8
						// ���ư��� ���� ������ 8����Ʈ �ı�
void __fastcall f4(int a, int b) { }

int main()
{
	f1(1, 2);
	f2(1, 2);	// push 2
				// push 1   // ������ ���� ���� ���ÿ� �ְ�
				// call _f2  // �Լ� ȣ��
				// add esp, 8  // ���� ���� ���� �ı�	

	f3(1, 2);   // push 2
				// push 1   // ������ ���� ���� ���ÿ� �ְ�
				// call _f3@8  // �Լ� ȣ��
				// ���� �ı� ����.


	f4(1, 2);	// mov edx, 2
				// mov ecx, 1
				// call @f4@8 
				// �������ͷ� �������Ƿ� ���� �ı� �ʿ����.
				// ���� ���� ���
}
*/

// cl �Լ�ȣ��Ծ�.cpp   /FAs   => �Լ�ȣ��Ծ�.asm

void            f1(int a, int b) { }
void __cdecl    f2(int a, int b) { }
void __stdcall  f3(int a, int b) { }
void __fastcall f4(int a, int b) { }

int main()
{
	f1(1, 2);
	f2(1, 2);
	f3(1, 2);
	f4(1, 2);
}
