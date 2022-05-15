template<typename InputIter, typename T>
InputIter xfind(InputIter first, InputIter last, T c)
{
	while (first != last && *first != c)
		++first;

	return first;
}
// cppreference.com 
int main()
{
	xfind()
}