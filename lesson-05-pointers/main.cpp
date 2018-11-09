/* Get the information of some variables.
 *
 * Input all variables. Then Print the value of each variable. And then print
 * the address of each where it is stored.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int givenInt;
	float givenFloat;
	double givenDouble;
	string givenString;
	char givenChar;

	cin >> givenInt;
	cin >> givenFloat;
	cin >> givenDouble;
	cin >> givenChar;
	getline(cin, givenString);

	cout << ' ' << givenInt;
	cout << ' ' << givenFloat;
	cout << ' ' << givenDouble;
	cout << ' ' << givenString;
	cout << ' ' << givenChar;

	cout << ' ' << &givenInt;
	cout << ' ' << &givenFloat;
	cout << ' ' << &givenDouble;
	cout << ' ' << &givenString;
	cout << ' ' << &givenChar;
}
