// 7_가상함수2.cpp  147 page ~

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
	// override : C++11 에서 추가된 문법
	//            가상함수 재정의시 사용하면 버그를 줄일수 있다
	virtual void draw() override {};
	virtual void Clone()override {};
	virtual void Move(int n) override {};
};
int main()
{

}