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
	int given_int;
	float given_float;
	double given_double;
	string given_string;
	char given_char;

	cin >> given_int;
	cin >> given_float;
	cin >> given_double;
	// Skip the end of line by std::ws.
	cin >> given_char >> ws;
	getline(cin, given_string);

	cout << ' ' << given_int;
	cout << ' ' << given_float;
	cout << ' ' << given_double;
	cout << ' ' << given_string;
	cout << ' ' << given_char;

	cout << ' ' << &given_int;
	cout << ' ' << &given_float;
	cout << ' ' << &given_double;
	cout << ' ' << &given_string;
	// TODO Give me a reason to code "(void*)" here.
	cout << ' ' << (void*)&given_char;
}
