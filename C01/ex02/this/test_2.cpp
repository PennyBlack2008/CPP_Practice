// this. 과 this-> 의 차이를 모르겠다.

#include <iostream>
#include <stdlib.h>

using namespace std;

class Monster
{
	public:
		int HP = 100;
		int Damage = 20;
		char* name = "김수한무거북이와두루미";
};

struct Player
{
	int HP = 100;
	int Damage = 10;
	char* name = "쪼렙";
};

int main(void)
{
	Player player;

	Player* player2 = new Player; // 구조체를 동적할당 한다.
	player2->Damage = 30;

	Monster monster;	// 클래스(객체) 선언
	monster.Damage = 50;

	Monster* monster2 = new Monster(); // 클래스(객체) 동적선언
	
	cout << "플레이어의 데미지:" << player.Damage << endl;
	cout << "플레이어2의 데미지:" << player2->Damage << endl;

	cout << "몬스터의 데미지:" << monster.Damage << endl;
	cout << "몬스터2의 데미지:" << monster2->Damage << endl;
}









