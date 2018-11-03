/* Fix the variable types problem.
 *
 * This code outputs the wrong answer even if it compiles and executes without
 * errors.
 */

#include <iostream>

int main()
{
	int denominator = 5, numerator = 4;

	int answer = numerator / denominator;
	std::cout << "answer = " << answer;
}
