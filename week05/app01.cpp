#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;
class Animal {
public:
	//virtual void makeSound() { cout << "µ¿¹°ÀÌ ¼Ò¸®¸¦ ³À´Ï´Ù...\n"; }
	virtual void makeSound() = 0; 
};
class Dog : public Animal {
public:
	void makeSound() { cout << "¸Û¸Û!\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "³Ä¿Ë~\n"; }
};
int main()
{
	//Animal animal;
	//animal.makeSound();

	Animal animal; // error

	return 0;
}