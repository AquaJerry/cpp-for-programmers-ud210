#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	array<int, 15> numbers;

	// get numbers from the user
	for (auto &number : numbers)
	{
		cout << "Enter a number: ";
		cin >> number;
		cout << number << endl;
	}

	auto [min, max] = minmax_element(numbers.begin(), numbers.end());
	cout << "Maximum number = " << *max << endl;
	cout << "Minimum number = " << *min << endl;

	auto average = accumulate(numbers.begin(), numbers.end(), 0.) /
		numbers.size();
	cout << "Average = " << average << endl;
}
