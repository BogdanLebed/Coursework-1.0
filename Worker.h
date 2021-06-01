#pragma once
#include "Person.h"
#include<string>
class Worker :
    public Person
{
private :
    std::string organization;
    std::string position;
    double salary;
    int experience;
public:
    Worker();
    Worker(std::string v_name, std::string v_organization, std::string v_position, double v_salary, int v_experience);
};

