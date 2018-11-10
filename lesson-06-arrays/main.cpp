/* Practice searching an array in C++.
 *
 * There is an array of integers. The length of the arrays to be searched
 * varies. A user will enter an integer and the program will search the array.
 * If the value is in the array, the program will return the location of the
 * element. If the value is not in the array, the user will be notified that
 * the value is not in the array. To exit the program the user will enter -1.
 */

#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	int prey, jungle[]{324, 4567, 6789, 5421345, 7, 65, 8965, 12, 342, 485};

	/* Determine if preys entered by the user are in the jungle. */
	cout << "Enter a number. To quit enter -1.\n";
	while (cin >> prey, ~prey)
	{
		auto prey_home = find(begin(jungle), end(jungle), prey);

		/* Use these commands to give feedback to the user. */
		cout << prey << " is ";
		if (end(jungle) != prey_home)
		{
			cout << "at location " << distance(jungle, prey_home);
		}
		else
		{
			cout << "not";
		}
		cout << " in the array.\n";
	}
}
