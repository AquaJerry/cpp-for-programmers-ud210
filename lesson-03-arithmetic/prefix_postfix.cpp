/* Practice prefix and postfix.
 *
 * Prefix, `++foo` or `--foo`:
 *
 * 1. increment or decrement the value of `foo`;
 * 2. return a reference to `foo`;
 *
 * Postfix, `bar++` or `bar--`:
 *
 * 1. create a copy `baz` of `bar`;
 * 2. increment or decrement the value of `bar`;
 * 3. return a reference to `baz`;
 */

#include <iostream>

int main()
{
	int a{}, b{};

	std::cout << "Inital values: \t\t\tpost = " << a << " pre = " << b
		<< "\nAfter one postfix and prefix: \tpost = " << a++
		<< " pre = " << ++b
		<< "\nAfter two postfix and prefix: \tpost = " << a++
		<< " pre = " << ++b
		<< '\n';
}
