/* Example for std::getline() */

#include "main.hpp"

int main()
{
	string nickname{};

	cout << "Tell me your nickname? ";
	getline(cin, nickname);
	cout << "Hello " << nickname << endl;
}
