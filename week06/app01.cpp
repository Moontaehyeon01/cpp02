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
	}

};

int main() {
	Complex c1;
	Complex c2(10, 7);
	
	c1.setReal(5);
	c1.setImaginary(3);
	cout << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
	cout << c2.getReal() << "+" << c2.getImaginary() << "i" << endl;
	
	Complex c3 = c1 + c2;
	cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;
	return 0;
}