/* Use a while loop to prompt a user to guess a target number.
 *
 * The target number is between 0 and 100 (both included). Then the user
 * guesses it. Tell the user if the guess is too high or too low. The user
 * enters -1 or guesses the target number to end the program.
 */

#include <iostream>
#include <random>

using namespace std;

int main()
{
	int delta, guess;
	// generate the target number
	int target = random_device()() % 101;

	cout << "Guess a number between 0 and 100. To quit enter -1.\n";
	do
	{
		cin >> guess;
		// quit if -1 got
		if (!~guess) break;
		delta = guess - target;
		cout << guess << ' '
			<< (delta ? delta < 0 ? "low" : "high" : "guessed")
			<< '\n';
	}
	while (delta);
}
