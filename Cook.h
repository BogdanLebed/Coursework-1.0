#pragma once
#include<iostream>
#include<map>
#include "Worker.h"
#include"Dish.h"
class Cook :
    public Worker
{
private:
    double salary;
    int experience;
public:
    Cook();
    Cook(const std::string& v_name, const std::string& v_organization, const std::string& v_position, double v_salary, int v_experience);
    void CookingTime(std::map<Dish*, int> ordered_dishes);

};

