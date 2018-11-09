/* Examine address-of operator.
 *
 * // assign the address of variable myvar to foo
 * foo = &myvar;
 */

#include <iostream>

int main()
{
	int a = 54;
	std::cout << "a = " << a << "\naddress of a: &a = " << &a << '\n';
}
