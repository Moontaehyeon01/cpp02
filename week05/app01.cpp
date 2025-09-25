#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;
class Animal {
public:
	//virtual void makeSound() { cout << "������ �Ҹ��� ���ϴ�...\n"; }
	virtual void makeSound() = 0; 
};
class Dog : public Animal {
public:
	void makeSound() { cout << "�۸�!\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "�Ŀ�~\n"; }
};
int main()
{
	//Animal animal;
	//animal.makeSound();

	Animal animal; // error

	return 0;
}