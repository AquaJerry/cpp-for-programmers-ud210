/* Practice switch statements in C++.
 *
 * Create a program that asks the user for two float numbers. Then asks the
 * user if they would like to: add the numbers, subtract the numbers, multiply
 * the numbers, divide the numbers.
 *
 * The program should then print the numbers with the chosen operation and the
 * solution.
 */

#include <functional>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	float in1, in2;
	map<char, function<float(float, float)>> operations =
	{
		{'+', plus<>()},
		{'-', minus<>()},
		{'*', multiplies<>()},
		{'/', divides<>()}
	};
	char sign;

	cout << "Enter two numbers:\n";
	cin >> in1 >> in2;
	cout << "Enter the operation '+', '-', '*', '/':\n";
	cin >> sign;
	cout << in1 << sign << in2 << '=' << operations[sign](in1, in2);
}
