/* Understand multidimensional arrays in C++.
 *
 *
 * Here's the regular form of the initialization of multidimensional arrays.
 *
 * type name[size_0][size_1]...[size_n]{item_0, item_1, ..., item_n}
 *
 *
 * An item in matrix is accessed by subscripts, i.e., row index and column
 * index of the matrix.
 *
 * matrix[0][2]
 *
 * That expression gets the 3rd item from the 1st row of the matrix.
 */

#include <iostream>

#define HEIGHT(matrix) (sizeof matrix / sizeof *matrix)
#define WIDTH 3

int main()
{
	int matrix[][WIDTH]{0, 1, 2, 3, 4, 5};

	for (size_t i = 0; i < HEIGHT(matrix); ++i)
		for (size_t j = 0; j < WIDTH; ++j)
			std::cout << "matrix[" << i << "][" << j << "] = "
				<< matrix[i][j] << '\n';
}
