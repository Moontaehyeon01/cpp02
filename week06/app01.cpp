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
		//real = real; <<- �����Ⱚ ��µ�
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
		//return Complex(r, this->imaginary); // ���������� ���������� ��������
	}
	Complex operator++(int) { // ��������
		Complex previous(this->real, this->imaginary);
		this->real = this->real + 1;
		return previous;
	}
	Complex operator++() { // ��������
		this->real++;
		return Complex(this->real, this->imaginary);
	}
};

int main() {
	Complex c1;
	Complex c2(10, 7);
	c1.setReal(5);
	c1.setImaginary(3);
	/*cout << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
	cout << c2.getReal() << "+" << c2.getImaginary() << "i" << endl;*/
	
	Complex c3 = c1 + c2; // Complex c3 = c1.operator+(c2);
	//cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;

	/*Complex c4 = c3++;*/ // ��������
	Complex c4 = ++c3; // ��������
	cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;
	cout << c4.getReal() << "+" << c4.getImaginary() << "i" << endl;

	//cout << c3++; // real ���� 1����

	//int i1 = 15;
	//int i2 = i1++;
	//cout << i2 << endl;

	return 0;
}