/* Find out why you care about pointers.
 *
 * `*pointer = value` assigns the value to the variable pointed by the
 * pointer.
 */

#include <iostream>
#include <string>

#define ABOUT(me) #me << " = " << me << '\n'

int main()
{
	int number, *pointer_number = &number;
	char character, *pointer_character = &character;
	std::string sentence, *pointer_sentence = &sentence;

	/* Assignments */
	*pointer_number = 45;
	*pointer_character = 'f';
	*pointer_sentence = "Hey look at me, I know pointers!";

	// Check if the assignments successful.
	std::cout << ABOUT(number) << ABOUT(character) << ABOUT(sentence);
}
