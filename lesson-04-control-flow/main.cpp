/* Practice if-else statements in C++.
 *
 * Ask questions and select a pet for the user. The questions are "Do you want
 * a pet with fur(f), feathers(t), or scales(s)?" and "You want a pet with
 * scales. Do you want the pet to live in water(w), on land(l), or both(b)?".
 * The pet may be: dog, bird, fish, gecko, frog.
 */

#include <iostream>

using namespace std;

int main()
{
	char skin, location;

	cout << "Would you like an animal with fur(f), feathers(t), or scales(s)?";
	cin >> skin;
	cout << skin << '\n';

	// Use if-else statements to control program flow

	cout << "Get a dog" << '\n';
	cout << "Get a bird" << '\n';

	cout << "Would you like an animal that lives in water(w), land(l), or both(b)?";
	cin >> location;
	cout << location << '\n';

	// Use if-else statements to control program flow

	cout << "Get a fish" << '\n';
	cout << "Get a gecko" << '\n';
	cout << "Get a frog" << '\n';
}
