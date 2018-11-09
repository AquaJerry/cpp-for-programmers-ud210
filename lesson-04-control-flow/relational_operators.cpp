/* Understand relational operators supported by C++.
 *
 * Example Meaning
 * A == B  A equals B
 * A != B  A is not equal to B
 * A > B   A is greater than B
 * A < B   A is less than B
 * A >= B  A is greater than or equal to B
 * A <= B  A is less than or equal to B
 */

#include <iostream>

// print "True" or "False" instead of 0 and 1
#define T_OR_F(p) (p ? "True" : "False")

int main()
{
	int a = 100, b = 33, c = 33;

	// print string values of each relational operation
	std::cout << "a < b is " << T_OR_F(a < b)
		<< "\na > b is " << T_OR_F(a > b)
		<< "\na != b is " << T_OR_F(a != b)
		<< "\nc >= b is " << T_OR_F(c >= b)
		<< "\nc <= b is " << T_OR_F(c <= b);
}
