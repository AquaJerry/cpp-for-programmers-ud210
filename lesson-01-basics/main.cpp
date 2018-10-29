/* Practice std::cin for strings.
 *
 * Write a program that prompts two users for their name, address, and phone
 * number. Print the information to the console in the following format.
 *
 * name\n\t\taddress\n\t\tphone number
 */

#include "main.hpp"

#define READ getline(cin, str)
#define END_AT READ; cout << str <<

int main()
{
	string str;

	while (READ)
	{
		cout << str << "\n\t\t";
		END_AT "\n\t\t";
		END_AT endl;
	}
}
