/* Pass by reference to a function.
 *
 * There're two functions that you need to write: calculate, print_equation.
 * Pass by reference any value modified in those functions.
 *
 * Move the function declaration and definition to the header file. Don't
 * forget to include the header file here.
 */

#include "main.hpp"

int main()
{
	char operation = '/';
	float input1 = 9.8, input2 = 2.3, result;

	calculate(input1, input2, operation, result);
	print_equation(input1, input2, operation, result);
}
