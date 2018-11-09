/* Understand break and continue statements.
 *
 *
 * break
 *
 * End the execution of the nearest enclosing switch statement or for/while/do
 * loop and execute the next statement following that if any.
 *
 *
 * continue
 *
 * Leave for the condition expression of the nearest enclosing while/do or "for
 * (init; cond; step)" loop.
 */

#include <iostream>

using namespace std;

int main()
{
	int a = 0;

	while (a < 5)
	{
		cout << "a = " << a++ << '\n';
		if (3 == a) break;
	}
	cout << "The first statement after the first while loop\n\n";

	while (a < 15)
	{
		if (10 == ++a)
		{
			cout << "\tWhen a=10, go back to the top of the loop\n"
				<< "\tThis means a=10 is skipped.\n";
			continue;
		}
		cout << "After continue a = " << a << '\n';
	}
}
