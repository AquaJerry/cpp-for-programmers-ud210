/* Accept inputs from input.txt. */

#include "main.hpp"

int main()
{
	int age{}, year{};
	string name{};

	cout << "What year is your favorite? ";
	cin >> year;
	cout << "How interesting, your favorite year is " << year << "!\n";
	cout << "At what age did you learn to ride a bike? ";
	cin >> age;
	cout << "How interesting you learned to ride at " << age << "!\n";
	cout << "What's your name? ";
	cin >> name;
	cout << "Hello " << name << "!\n";
}
