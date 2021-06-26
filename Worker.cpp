#include "Worker.h"
#include <iostream>

Worker::Worker()
{
}

Worker::Worker(const std::string& v_name, const std::string& v_organization, const std::string& v_position): Person(v_name)
{
	this->organization = v_organization;
	this->position = v_position;
}

void Worker::Info()
{
	Person::Info();
	std::cout << ", Organization: " << organization << ", Position: " << position;
}

Worker::~Worker()
{
}
