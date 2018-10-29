/* Practice debugging.
 *
 * The following program has a number of errors in it. Please find and correct
 * the errors.
 */

#include "main.hpp"

 int main ()
 {
   int FTemp = 0;
   int CTemp = 0;

   cout << "Enter a Farenheit temperature: ";
   cin >> FTemp;

   CTemp = FTemp - 32 / (9/5);
   cout << '\n' << FTemp << " in Farenheit = "  << CTemp << " in Celsius\n";
   return 0;
 }
