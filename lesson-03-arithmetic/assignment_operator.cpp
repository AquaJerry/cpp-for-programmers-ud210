/* Understand variable assignment operators.
 *
 * Operator Example  Equivalence
 * +=       A += B   A = A + B
 * -=       A -= B   A = A - B
 * *=       A *= B   A = A * B
 * /=       A /= B   A = A / B
 * %=       A %= B   A = A % B
 */

#include <iostream>

int main()
{
	int a = 0, b = 3;

	std::cout << "Variable\t\tOperation\tResult"
		<< "\na = " << a << "\t\t\ta += 2\t\ta = " << (a += 2)
		<< "\na = " << a << "\t\t\ta -= 4\t\ta = " << (a -= 4)
		<< "\na = " << a << ", b = " << b
		<< "\t\ta *= b\t\ta = " << (a *= b)
		<< "\na = " << a << ", b = " << b
		<< "\t\ta /= b\t\ta = " << (a /= b)
		<< '\n';
}
