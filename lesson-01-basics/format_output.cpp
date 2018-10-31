/* Formatting Output
 *
 * Goal: practice using cout to format output to console. Print the variables
 * in three columns: Ints, Floats, Doubles.
 */

#include <iostream>
#include <iomanip>

#define col(v) std::setw(9) << v
#define row(v0, v1, v2) col(v0) << col(v1) << col(v2) << '\n'

int main()
{
	int a = 45;
	float b = 45.323;
	double c = 45.5468;
	int aa = a + 9;
	float bb = b + 9;
	double cc = c + 9;
	int aaa = aa + 9;
	float bbb = bb + 9;
	double ccc = cc + 9;

	std::cout << row(a, b, c) << row(aa, bb, cc) << row(aaa, bbb, ccc);
}
