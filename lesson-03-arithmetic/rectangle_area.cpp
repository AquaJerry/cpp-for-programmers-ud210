/* Practice implicit assignment: double to int.
 *
 * What's the output of this program?
 */

#include <iostream>

int main()
{
	float height = 5.5, width = 4.5;

	int area = width * height;
	std::cout << "area = " << area;
}
