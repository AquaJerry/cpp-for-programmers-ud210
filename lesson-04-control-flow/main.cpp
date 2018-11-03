/* Learn if-else statements in C++.
 *
 * The user guess is in the input.txt file. Change the value to test each of
 * the possible code branches.
 */

#include <iostream>

#define TARGET 33

using namespace std;

int main()
{
	int guess;

	cout << "Guess a number between 0 and 100.\n";
	cin >> guess;
	cout << "You guessed: " << guess << ".\n";

	if (guess < TARGET)
	{
		cout << "Your guess is too low.\n";
	}
	else if (guess > TARGET)
	{
		cout << "Your guess is too high.\n";
	}
	else
	{
		cout << "Yay! You guessed correctly.\n";
	}
}
