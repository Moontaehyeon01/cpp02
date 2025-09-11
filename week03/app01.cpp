/********************************************************************
 * �������� 2���� ��Ḧ Ȱ���� �ҿ����� �������� ���캸�� ���α׷� *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// ���̽� Ŭ������ ����
class Pokemon
{
public:
	void attack() const { cout << "Attack!" << endl; }
};
// �Ļ� Ŭ������ ����
class Pikachu : public Pokemon // is-a
{
public:
	void attack() const { cout << "Electric Attack!!" << endl; }
};
int main()
{
	// ���̽� Ŭ������ ���� ������(����) ����
	Pokemon* pokemon;
	// ptr �����ͷ� ���̽� Ŭ������ ��ü ����Ű��
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// ptr �����ͷ� �Ļ� Ŭ������ ��ü ����Ű��
	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}