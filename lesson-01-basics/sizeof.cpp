/* GOAL: Practice writing to the console and learn the variables types
 * available in C++. Print the sizes of each variable to the console. Print
 * them in the following order: int, short, long, char, float, double, bool.
 *
 * Use the command sizeof(variable type) ie: sizeof(int).
 */

#include <iostream>

#define s(t) sizeof(t) << endl

int main()
{
	using namespace std;

	cout << s(int) << s(short) << s(long) << s(char) << s(float) <<
		s(double) << s(bool);
}
