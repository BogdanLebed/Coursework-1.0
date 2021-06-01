#pragma once
#include<iostream>
#include "Worker.h"
class Seller :
    public Worker
{
public:
    Seller();
    Seller(std::string v_name, std::string v_organization, std::string v_position, double v_salary, int v_experience);
    void TakeOrder();
};

