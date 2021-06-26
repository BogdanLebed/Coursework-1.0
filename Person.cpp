#include "Person.h"
#include <iostream>

Person::Person()
{	
}
Person::Person(const std::string& v_name)
{
	full_name = v_name;
}
 void Person::Info()
{
	 std::cout << "Full name: " << full_name;
}
 Person::~Person()
 {
 }

