

#include <iostream>

enum compass { North = 1, East, South, West };


int main()
{
	
	int input;

	std::cout << "North = 1\nEast  = 2\nSouth = 3\nWest  = 4\n";
	std::cout << "what direction do you want to face? ";
	std::cin >> input;
	
	compass direction = (compass)input;


	switch (direction) {

	case compass::North:
		std::cout << "you are currently facing North.";
		break;

	case compass::East:
		std::cout << "in order to face East turn 90 degrees to the right.";
		break;

	case compass::South:
		std::cout << "in order to face South, turn 180 degrees in any direction.";
		break;

	case compass::West:
		std::cout << "in order to face West turn 90 degrees to the left.";
		break;

	default:
		break;
	}

	



}

