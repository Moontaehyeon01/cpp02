#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int imaginary;

public:
	Complex() : real(0), imaginary(0) {
	}
	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {

	}
	//void setReal(int real) : real(real){
	void setReal(int real) {
		this->real = real;
		//real = real; <<- 쓰레기값 출력됨
	}
	int getReal() const {
		return real;
	}

	void setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}
	int getImaginary() const {
		return imaginary;
	}
	Complex operator+(const Complex& right) {
		int r = this->real + right.real;
		int i = this->imaginary + right.imaginary;
		return Complex(r, i);
		//return Complex(r, this->imaginary); // 가능하지만 수학적으로 문제가됨
	}
	Complex operator++(int) { // 후위연산
		Complex previous(this->real, this->imaginary);
		this->real = this->real + 1;
		return previous;
	}
	Complex operator++() { // 전위연산
		this->real++;
		return Complex(this->real, this->imaginary);
	}
};

ostream& operator<<(ostream& o, Complex right) { // non member
	o << right.getReal() << "+" << right.getImaginary() << "i";
	return o;
}

int main() {
	Complex c1;
	Complex c2(10, 7);
	c1.setReal(5);
	c1.setImaginary(3);

	Complex c3 = c1 + c2; // Complex c3 = c1.operator+(c2);

	Complex c4 = c3++;
	/*cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;
	cout << c4.getReal() << "+" << c4.getImaginary() << "i" << endl;*/
	cout << c3 << endl;
	cout << c4 << endl;
	return 0;
}