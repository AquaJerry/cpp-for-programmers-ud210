/* Examine address-of operator.
 *
 * // assign the address of variable myvar to foo
 * foo = &myvar;
 *
 * // let baz equal to value pointed by foo
 * baz = *foo;
 */

#include <iostream>

int main()
{
	int a = 54;

	// This is a pointer that holds the address of the variable 'a'. If 'a'
	// was a float, rather than int, so should be its pointer.
	int *pointer_to_a = &a;

	std::cout << "a = " << a << "\naddress of a: &a = " << &a << '\n';

	// If we were to print pointer_to_a, we'd obtain the address of 'a'.
	std::cout << "pointer_to_a stores " << pointer_to_a << '\n';

	// If we want to know what is exactly stored in this address, we can
	// dereference it.
	std::cout << "pointer_to_a points to " << *pointer_to_a << '\n';
}
