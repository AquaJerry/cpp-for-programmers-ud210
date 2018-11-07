/* Use for loops.
 *
 *
 * SYNTAX
 *
 * for (initialization; condition; step)
 * {
 * 	statements
 * }
 *
 *
 * EXPLANATION
 *
 *    initialization;
 * l: if (not(condition))
 *    {
 *    	goto m;
 *    }
 *    statements
 *    step;
 *    goto l;
 * m: ;
 */

#include <iostream>

int main()
{
	for (size_t i = 0; i < 10; ++i)
	{
		std::cout << "i = " << i << "\n";
	}
}
