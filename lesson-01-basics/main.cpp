/* Practice getting string inputs and converting them to numeric variables
 * using stringstream.
 * 
 * Prompt the user for the length of a room. Then prompt for the width of the
 * room. Print out the area of the room.
 */

#include "main.hpp"

int main()
{
	float length, width;
	std::cin >> length >> width;
	std::cout << length * width;
}
