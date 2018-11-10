/* Find the min and max and average of 15 numbers that a user will input.
 *
 * The numbers range from 0 to 100.
 *
 * We will do it now for practice and again later when we learn arrays and
 * functions. So you do not have to keep all fifteen numbers stored in memory.
 */

#include <iostream>
#include <valarray>

using namespace std;

int main()
{
	valarray<int> numbers(15);

	for (auto &number : numbers) cin >> number;

	cout << numbers.min() << ' ' << numbers.max() << ' ' << numbers.sum() /
		15.;
}
