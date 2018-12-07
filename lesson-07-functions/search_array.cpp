/* Create a function that searches a list for a given value.
 *
 * If the list contains the value, return the index where the value is located.
 * Otherwise return -1.
 *
 * The index is the distance between in the list two addresses of the given
 * value and the first value.
 */

#include <algorithm>
#include <iostream>

int search(int *list, int size, int value)
{
	auto end = list + size, index = std::find(list, end, value);

	return index != end ? index - list : -1;
}

int main()
{
	int list[]{345, 75896, 2, 543};

	std::cout << search(list, 4, 543);
}
