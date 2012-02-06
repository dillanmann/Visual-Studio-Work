#include <iostream>
using namespace std;

struct player{
	player(){accuracy = 0;score=301;}
	float accuracy;
	int score;
} joe,sid;

void main(){

//declarations
	const int ArrayMax = 22;
	const int SegmentValue[ArrayMax] ={20,1,18,4,13,6,10,15,2,17,3,19,7,16,8,11,14,9,12,5,20,1};
	bool win = false;
	enum turn {p1,p2};
	int turn = p1;

//prototypes


//main loop
	while(joe.score>0 || sid.score>0){
		if (joe.score==50){
			//call hitbull
		}
		else if(joe.score>50){
			//call hitsegment
		}
		else if(sid.score==50){
			//call hitbull
		}
		else if(sid.score>50){
			//call hitsegment
		}
	}

}