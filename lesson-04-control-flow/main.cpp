/* Understand the switch statement in C++.
 *
 * This example does not use a break statement between the possibilities, which
 * means all menu items below the selected one are executed.
 */

#include <iostream>

using namespace std;

int main()
{
	char menu_item;

	cout << "Choose your holiday package:\nL: luxury package\n"
		<< "S: standard package\nB: basic package ";
	cin >> menu_item;
	cout << "\nThe " << menu_item << " package includes:\n";

	switch (menu_item)
	{
		case 'L':
			cout << "\tSpa Day\n";
			cout << "\tSailboat Tour\n";
		case 'S':
			cout << "\tCity Tour\n";
			cout << "\tComplimentary Happy Hour\n";
		case 'B':
			cout << "\tAirport Transfers\n";
			cout << "\tComplimentary Breakfast\n";
			break;
		default:
			cout << "Please select the L,S,B package.\n";
	}
}
