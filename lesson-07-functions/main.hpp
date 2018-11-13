/* Pass by reference to a function.
 *
 * The Declarations in a header file can be omitted though, it's often
 * considered a good practice to list the declarations at the top of the header
 * file.
 */

#include <functional>
#include <iostream>
#include <map>

using namespace std;


/******************************** DECLARATIONS ********************************/

void calculate(float m1, float m2, char operation, float &result);

void print_equation(float m1, float m2, char operation, float result);


/******************************** DEFINITIONS *********************************/

map<char, function<float(float, float)>> operations
{
	{'+', plus<>()},
	{'-', minus<>()},
	{'*', multiplies<>()},
	{'/', divides<>()}
};

/* Modify the result into 'm1 operation m2'. */
void calculate(float m1, float m2, char operation, float &result)
{
	result = operations[operation](m1, m2);
}

/* Prints the equation 'm1 operation m2 = result'. */
void print_equation(float m1, float m2, char operation, float result)
{
	cout << m1 << ' ' << operation << ' ' << m2 << " = " << result;
}
