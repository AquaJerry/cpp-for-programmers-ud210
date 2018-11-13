/* Practice writing filters (functions with parameters and return values).
 *
 * The Declarations in a header file can be omitted though, it's often
 * considered a good practice to list the declarations at the top of the header
 * file.
 */

#include <functional>
#include <iostream>


/******************************** DECLARATIONS ********************************/

void print_equation(int m1, int m2, int result, char operation);

// Add tow integers and return the sum.
#define sum std::plus<>()


/******************************** DEFINITIONS *********************************/

/* Prints the equation 'm1 operation m2 = result'. */
void print_equation(int m1, int m2, int result, char operation)
{
	std::cout << m1 << ' ' << operation << ' ' << m2 << " = " << result;
}
