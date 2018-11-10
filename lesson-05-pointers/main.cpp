/* Get the information of some variables.
 *
 * Input all variables. Then Print the value of each variable. And then print
 * the address of each where it is stored.
 *
 *
 * OUTPUT_NOT_AN_ADDRESS (https://stackoverflow.com/questions/17813423)
 *
 * `cout << &given_char;` prints a string starting with given_char instead of
 * the address of it. You can change it into `cout << (void*)&given_char;` or
 * `cout << static_cast<void*>(&given_char);`.
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
	// See OUTPUT_NOT_AN_ADDRESS.
	cout << ' ' << (void*)&given_char;
}
