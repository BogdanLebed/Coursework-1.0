#include "Person.h"

Person::Person()
{
	
	full_name = "Не известно";
}

Person::Person(std::string v_name,std:: string v_organization ,std::string v_position)
{
	full_name = v_name;
	organization = v_organization;
	position = v_position;
}

std::string Person::GetName()
{
	return full_name;
}

std::string Person::GetPosition()
{
	return position;
}
std::string Person::GetOrganisation()
{
	return organization;
}
std::string Person::Info()
{
	return "ФИО: " + GetName() + " , организация: " + GetOrganisation()  + ", должноть: " + GetPosition();
}

