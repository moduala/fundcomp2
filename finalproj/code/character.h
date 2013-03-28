#ifndef CHARACTER_H
#define CHARACTER_H


#include <iostream>


using namespace std;


class character {

	public:
		character();
		void move(); // have the characters move across board
		int ifClicked(); // returns one if the character is clicked
		void attack(); // attacks other objects
		void collision(); // if anything is going to collide while it moves
	
	private:
		int maxHealth, health, team, speed, type, damage, cost;
		int x, y, area;
};

#endif
