/*Use the namespace keyword to simplify typing*/

/* WARINING
 *
 * When the namespace are not explicitly defined, there is a possibility that
 * when your code is added to a large project, your code might reference a
 * namespace from a different library.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Hey, writing std:: is pain, ";
    cout << "change the program so I don't have to write it.";
}
