// 7_�����Լ�2.cpp  147 page ~

class Shape
{
public:
	virtual void Draw() {};
	virtual void Clone() const {};
	virtual void Move() {};
};
class Rect : public Shape
{
public:
	// override : C++11 ���� �߰��� ����
	//            �����Լ� �����ǽ� ����ϸ� ���׸� ���ϼ� �ִ�
	virtual void draw() override {};
	virtual void Clone()override {};
	virtual void Move(int n) override {};
};
int main()
{

}