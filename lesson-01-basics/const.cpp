/* Goal: use constant variables */

#include <iostream>

int main()
{
	using std::cout;
	const int weight_goal = 100;

	cout << "WeightGoal = " << weight_goal << "\n";
	weight_goal = 200;
	cout << "WeightGoal = " << weight_goal << "\n";
}
