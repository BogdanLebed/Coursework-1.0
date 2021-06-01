#include "Worker.h"

Worker::Worker()
{
	salary = 0;
	experience = 0;
}

Worker::Worker(std::string v_name, std::string v_organization, std::string v_position, double v_salary, int v_experience): Person(v_name), organization(v_organization), position(v_position), salary(v_salary), experience(v_experience)
{
	organization = v_organization;
	position = v_position;
	salary = v_salary;
	experience = v_experience;
}