// Ex 7.12 - Based on Ex 7.11 but the constructor that takes an istream is defined in the body of
// the Sales_data class.
#include <iostream>
#include <stdexcept>
#include "Sales_data.h"
using std::cout;
using std::endl;

int main()
{
	try {
		Sales_data book1;
		Sales_data book2("0-201-82470-1");
		Sales_data book3("0-201-82470-1", 2, 10);
		Sales_data book4(std::cin);

		print(cout, book1) << endl;
		print(cout, book2) << endl;
		print(cout, book3) << endl;
		print(cout, book4) << endl;
	}
	catch (std::runtime_error err) {
		cout << err.what() << endl;
		return -1;
	}
	return 0;
}
