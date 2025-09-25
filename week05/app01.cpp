#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound() { cout << "������ �Ҹ��� ���ϴ�~\n"; }
};
class Dog : public Animal {
public:
	void makeSound() { cout << "�۸�!\n"; }
};
class Cat :public Animal {
public:
	void makeSound() { cout << "�Ŀ�~\n"; }
};

int main()
{
	Animal* pa = new Dog(); // upcasting, oldstyle (C style)
	pa->makeSound();

	Cat* pc = (Cat*)pa; // Dangerous behavior
	pc->makeSound();
	delete pc;
	pc = nullptr;

	// Both results are same.
	//Dog* pd = (Dog*)pa; // downcasting, oldstyle (C style)
	//Dog* pd = dynamic_cast<Dog*>(pa);//downcasting, modern style (C++11)
	//pd->makeSound();
	//delete pd;
	//pd = nullptr;

	return 0;
}