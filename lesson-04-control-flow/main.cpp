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
	if ('f' == skin)
	{
		cout << "Get a dog" << '\n';
	}
	else if ('t' == skin)
	{
		cout << "Get a bird" << '\n';
	}
	else
	{
		cout << "Would you like an animal that lives in water(w), land(l), or both(b)?";
		cin >> location;
		cout << location << '\n';

		// Use if-else statements to control program flow
		if ('w' == location)
		{
			cout << "Get a fish" << '\n';
		}
		else if ('l' == location)
		{
			cout << "Get a gecko" << '\n';
		}
		else
		{
			cout << "Get a frog" << '\n';
		}
	}
}
