/* Find all possible outputs for the given expression.
 *
 * Hint: there are three inputs, so there are 8 possible input combinations
 * (2^3) which means there is an output for each combination of inputs.
 *
 * The expression: (A and B and C) or (A and ((not B) or (not C))) = Q.
 */

#include <iostream>

int main()
{
	int a, b, c, d, e, f, q;

	std::cout << "A\tB\tC\t\t(A&&B&&C)\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
	for (size_t i = 0; i < 8; ++i)
	{
		a = (i bitand 4) >> 2;
		b = (i bitand 2) >> 1;
		c = i bitand 1;
		d = a and b and c;
		e = not b or not c;
		f = a and e;
		q = d or f;
		std::cout << a << '\t' << b << '\t' << c << "\t\t" << d
			<< "\t\t" << e << "\t\t" << f << "\t\t" << q << '\n';
	}
}
