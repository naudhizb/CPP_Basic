// 139 page
// protected ������ : �ڽ��� ��ü�� �����Ҽ� ������(�߻��� ����, abstract)
//	    �Ļ� Ŭ������ ��ü�� �����Ҽ� �ְ�(��ü�� ����, concrete) �ϴ� ���
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
	// ������ ������ ��� ������
	Animal a; // 1. error
	Dog    d; // 2. ok
}

