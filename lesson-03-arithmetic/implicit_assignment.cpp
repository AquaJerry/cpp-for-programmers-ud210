/* Understand C++ implicit variable assignments.
 *
 * Run the program to see implicit variable assignment at work.
 */

#include <iostream>

int main()
{
	int a = 65, integer = 80;
	char charA = 65, charB = 'B', charC = 67;
	float answer, floatNumber;

	std::cout << "a = " << a << '\n'
		<< "charA = " << charA << '\n'
		<< "charB = " << charB << '\n'
		<< "integer = " << integer << "\n\n"

		// we can assign an integer to a float
		<< "floatNumber = integer = " << (floatNumber = integer) << '\n'

		// we can assign a char to a float
		<< "floatNumber = charB = " << (floatNumber = charB) << '\n'
		<< "answer = floatNumber/4 = " << (answer = floatNumber / 4) <<
		'\n'

		// but assigning a float to a char seems strange
		<< "charC = answer = " << (charC = answer) << '\n'

		// a truncated float is from assigning a float to an int
		<< "integer = answer = " << (integer = answer) << '\n';
}
