/* Practice array manipulation in C++.
 *
 * The user will input 40 integers. Put them into an array. Then print the
 * array in the order the numbers were entered. Then print in reverse order.
 * Then sort the array in ascending order and print it. The each print of the
 * array should separate the numbers in the array by one space. For example:
 * the array were [3,4,55] the printout would be 3 4 55.
 */

#include <iostream>
#include <list>

// IN_OLDER_CPP
//
// for (list<int>::iterator item = list.begin(); list.end() != item; ++item)
// 	cout << *item << ' '
//
#define PRINT(list) for (auto item : list) cout << item << ' '

using namespace std;

int main()
{
	list<int> user_inputs(40);

	// See IN_OLDER_CPP.
	for (auto &item : user_inputs)
	{
		cin >> item;
		cout << item << ' ';
	}

	user_inputs.reverse();
	PRINT(user_inputs);

	user_inputs.sort();
	PRINT(user_inputs);
}
