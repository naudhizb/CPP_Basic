
// 이미 list가 있습니다.
#include <list>

// 그런데, 사용자가 스택을 요구 합니다.
template<typename T> class stack : private std::list<T>
{
public:
	void push(const T& a) { std::list<T>::push_back(a); }
	void pop()            { std::list<T>::pop_back(); }
	T&   top()            { return std::list<T>::back(); }
};
int main()
{
	stack<int> s;
	s.push(10);
	//s.push_front(30); // error. private 입니다.
}