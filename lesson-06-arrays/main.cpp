/* Practice using multidimensional arrays.
 *
 * Write a program that will accept values for a 4x4 array and a vector of size
 * 4. Use the dot product to multiply the array by the vector. Print the
 * resulting vector.
 */

#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	// list represents the vector; matrix represents the 4x4 array.
	int list[4], matrix[4][4];

	for (auto &row : matrix) for (auto &cell : row) cin >> cell;
	for (auto &item : list) cin >> item;

	// Multiply the 4x4 array with the vector. Print the resultant product
	// vector.
	for (size_t i = 0; i < 4; ++i)
		cout << inner_product(matrix[i], matrix[i + 1], list, 0) << ' ';
}
