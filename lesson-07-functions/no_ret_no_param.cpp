/* Practice functions that do not return and do not accept parameters.
 *
 *
 * An example of these functions consists of following two essential parts.
 *
 * Declaration.
 *
 * void function_name();
 *
 * Definition.
 *
 * void function_name()
 * {
 * 	// statement(s);
 * }
 */

#include <iostream>

// This is placed before main.
void print_message();

int main()
{
	print_message();
}

void print_message()
{
	std::cout << "HEY! I'm from a function!";
}
