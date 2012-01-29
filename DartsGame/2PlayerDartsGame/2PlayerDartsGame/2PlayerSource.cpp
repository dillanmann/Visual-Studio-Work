#include <ctime>
#include <iostream>
using namespace std;

void main(){
//declarations
	struct player{
		player(){hits=0;throws=0;accuracy=0;}
		int hits;
		int throws;
		float accuracy;
	} joe,sid;

//prototypes
void rotate_throws(player player1,player player2);

	joe.accuracy = 0.70f;
	sid.accuracy = 0.72f;
	srand(time(NULL));


}

void rotate_throws(player player1,player player2){
	enum turn {p1,p2};
	int chance=0;
	turn = p1;
	while (player1.hits<10 || player2.hits<10){
		if(turn == p1){
			if(rand()%100<70)
				player1.hits+=1;

		player1.throws+=1;
		turn = p2;
		}
		else if(turn == p2){
			if(rand()%100<72)
				player2.hits+=1;

			player2.throws+=1;
			turn = p1;
		}
	}

}