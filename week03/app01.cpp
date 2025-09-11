/********************************************************************
 * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// 베이스 클래스의 정의
class Pokemon
{
public:
	void attack() const { cout << "Attack!" << endl; }
};
// 파생 클래스의 정의
class Pikachu : public Pokemon // is-a
{
public:
	void attack() const { cout << "Electric Attack!!" << endl; }
};
int main()
{
	// 베이스 클래스에 대한 포인터(소켓) 생성
	Pokemon* pokemon;
	// ptr 포인터로 베이스 클래스의 객체 가리키기
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// ptr 포인터로 파생 클래스의 객체 가리키기
	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}