#pragma once
#include "Person.h"
#include<string>
class Worker :
    public Person
{
private :
    std::string organization;
    std::string position;
public:
    Worker();
    Worker(const std::string& v_name, const std::string& v_organization, const std::string& v_position);
    void Info();
    ~Worker();
};

