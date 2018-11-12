/* Practice putting functions in a header file.
 *
 * The Declarations in a header file can be omitted though, it's often
 * considered a good practice to list the declarations at the top of the header
 * file.
 */

#include <iostream>


/******************************** DECLARATIONS ********************************/

void print_product(int m1, int m2, int product);


/******************************** DEFINITIONS *********************************/

/* Prints the results of the multiplication of two integers. */
void print_product(int m1, int m2, int product)
{
	std::cout << m1 << " * " << m2 << " = " << product;
}
