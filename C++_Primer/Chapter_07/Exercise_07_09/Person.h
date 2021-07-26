#ifndef PERSON_H

#define PERSON_H
#include <string>
using std::string;

struct Person {

	string name() const {return name;}
	string address() const {return address;}

	string name;
	string address;
};

// Nonmember Sales_data interface functions
std::istream &read(std::istream&, Person&);
std::ostream& print(std::ostream&, const Person&)
#endif
