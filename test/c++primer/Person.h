#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person{
private:
	std::string firstName;
	std::string lastName;
	std::string address;
	std::string name;
public:
	Person();
	Person(string firstname, string lastname);

};

Person::Person(std::string firstname, std::string lastname){
	name = firstName + " " + lastName;
}


#endif
