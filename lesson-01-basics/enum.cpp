/* Enum Example */

/* REFERENCES
 *
 * https://stackoverflow.com/questions/1405851/enum-naming-convention-plural
 */

#include <iostream>

int main()
{
	// define 12 months
	enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

	// define my favorite month
	MONTH best_month;

	best_month = Jan;

	if (Jan == best_month)
	{
		std::cout << "I'm not so sure January is the best month\n";
	}
}
