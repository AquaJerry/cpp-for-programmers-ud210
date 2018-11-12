/* Practice writing functions.
 *
 * Write a function called "print_product" that prints the results of the
 * multiplication of two integers.
 */

#include <iostream>

void print_product(int m1, int m2, int product)
{
	std::cout << m1 << " * " << m2 << " = " << product;
}

int main()
{
	int m1 = 4, m2 = 5, product = m1 * m2;

	print_product(m1, m2, product);
}
