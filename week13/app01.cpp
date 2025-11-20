#include <iostream>
using namespace std;

// 템플릿 함수 정의
template <typename T>
void swap(T* first, T* second)
{
	T temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	// int 자료형 스왑
	int i1 = 5;
	int i2 = 70;
	swap(&i1, &i2);
	cout << "swap(5, 70) = ";
	cout << i1 << "  " << i2 << endl;
	// double 자료형 스왑
	double d1 = 51.5;
	double d2 = 42.7;
	swap(d1, d2);
	cout << "swap(51.5, 42.7) = ";
	cout << d1 << "  " << d2 << endl;
	return 0;
}