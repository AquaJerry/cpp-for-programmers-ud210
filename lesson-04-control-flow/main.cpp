/* Write a program that asks a user for five numbers.
 *
 * Print out the sum and average of the five numbers.
 */

#include <iostream>
#include <valarray>

using namespace std;

int main()
{
	valarray<int> numbers(5);
	for (auto &number : numbers)
	{
		cin >> number;
	}
	auto sum = numbers.sum();
	// print out the sum and average.
	cout << sum << ' ' << .2 * sum;
}
