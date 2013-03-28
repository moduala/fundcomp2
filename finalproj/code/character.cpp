#include <iostream>
#include "character.h"


using namespace std;


character::character()
{
	// initialize stats
	maxHealth = 100;
	health = maxHealth;
}


void character::ifClicked()
{
	/* 
		if the mouse click is inside the area of the character 
		make green box around character
	*/
}


void character::move()
{	
	/* 
		take the x and y of a mosue click
		find the slope between two points
		use for loop to move character
		increment based on character speed
	*/
}


void character::attack()
{
	/*
		using collision detection damage will be given to other character objects
	*/
}	


void character::collision()
{
	/*
		based on the type of character this function will see is if hits another object and attack or move around accordingly
	*/
}
