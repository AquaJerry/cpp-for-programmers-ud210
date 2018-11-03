/* Demonstrate use cases for the switch statement.
 *
 * switch (expression)
 * {
 * 	case constant-expression:
 * 		statements;
 * 		break; // optional
 *	case constant-expression:
 *		statements:
 *		break; // optional
 *	...
 *	default: // optional
 *		statements;
 * }
 */

#include <iostream>

using namespace std;

int main()
{
	int menu_item = 1;
	cout << "What is your favorite winter sport?\n1. Skiing\n2. Sledding\n"
		<< "3. Sitting by the fire\n4. Drinking hot chocolate\n\n\n";
	switch (menu_item)
	{
		case 1:
			cout << "Skiing?! Sounds dangerous!\n";
			break;
		case 2:
			cout << "Sledding?! Sounds like work!\n";
			break;
		case 3:
			cout << "Sitting by the fire?! Sounds warm!\n";
			break;
		case 4:
			cout << "Hot chocolate?! Yum!\n";
			break;
		default:
			cout << "Enter a valid menu item";
	}

	char begin = 'M';
	cout << "\n\nWhere do you want to begin?\nB. At the beginning?\n"
		<< "M. At the middle?\nE. At the end?\n\n";
	switch (begin)
	{
		case 'B':
			cout << "Once upon a time there was a wolf.\n";
		case 'M':
			cout << "The wolf hurt his leg.\n";
		case 'E':
			cout << "The wolf lived happily everafter.\n";
	}
}
