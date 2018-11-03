/* Understand logical operators supported by C++.
 *
 * A     not A
 * false true
 * true  false
 *
 * A     B     A and B  A or B
 * false false false    false
 * false true  false    true
 * true  false false    true
 * true  true  true     true
 */

#include <iostream>

// print "True" or "False" instead of 0 and 1
#define T_OR_F(p) (p ? "True" : "False")

int main()
{
	int A = 5, B = 4, C = 5, D = 0;

	std::cout << "A == C is " << T_OR_F(A == C)
		<< "\nB == D is " << T_OR_F(B == D)
		<< "\nB > D is " << T_OR_F(B > D)

		/* the and operator */
		// true and false == false
		<< "\n\nA == C and B == D is " << T_OR_F(A == C and B == D)
		// true and true == true
		<< "\nA == C and B > D is " << T_OR_F(A == C and B > D)

		/* the or operator */
		// true or false == true
		<< "\n\nA == C or B == D is " << T_OR_F(A == C or B == D)
		// true or true == true
		<< "\nA == C or B > D is " << T_OR_F(A == C or B > D)

		/* the not operator */
		// not false == true
		<< "\n\nnot(B == D) is " << T_OR_F(not(B == D))
		// not true == false
		<< "\nnot(A == C) is " << T_OR_F(not(A == C));
}
