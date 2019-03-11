/* array=constant pointer? http://www.cplusplus.com/forum/beginner/119149/
 *
 * We know that in C programming language most functions operating on an array
 * let you give the length of it manually. For example:
 *
 * ```c
 * #include <stdio.h>
 * void echo(int *array, size_t length) {
 *   for (size_t i = 0; i < length; ++i) {
 *     printf("%d ", array[i]);
 *   }
 *   printf("\b\n");
 * }
 * int main() {
 *   int array[5] = {2, 3, 5, 7, 11};
 *   echo(array, 5);
 * }
 * ```
 *
 * Fortunately, using following template function helper provided by C++
 * language, you could free yourself from repeating the length of arrays.
 */

#include <iostream>

template <class T> void echo(T *a, size_t N) {
  for (size_t i = 0; i < N; ++i) {
    std::cout << a[i] << " ";
  }
  std::cout << "\b\n";
}

template <class T, size_t N> inline void echo(T (&a)[N]) {
  echo(static_cast<T *>(a), N);
}

int main() {
  int a[]{2, 3, 5, 7, 11};
  echo(a);
}
