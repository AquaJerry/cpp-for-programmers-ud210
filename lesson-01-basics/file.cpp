/* The goal of this quiz is to practice writing and reading files. Read the
 * contents of input.txt and then write to it.
 *
 * We are using input.txt as our file. This is not an ideal situation, because
 * when we write to it, we cannot see the changes. We can manually write in
 * input.txt and we can also use the program to write to the file. Then we can
 * read what we wrote using our program.
 */

/* Your assignment for this quiz.
 *
 * Change the contents of the file called input.txt. Change the ifstream and
 * ofstream to fstream.
 */

#include <fstream>

int main() {
	// Make an access to input.txt. Append some new lines to the end of it.
	std::fstream file("input.txt", std::ios::app);

	file << "\nI am adding a line.\nI am adding another line.\n";
	file.close();
}
