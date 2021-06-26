#pragma once
#include<iostream>
#include<vector>
#include "Worker.h"
#include"Menu.h"
class Seller : public Worker
{
private:
    double salary;
    int experience;
    Menu* m;
public:
    Seller();
    Seller(const std::string& v_name, const std::string& v_organization, const std::string& v_position, double v_salary, int v_experience);
    void Info();
    std::map<Dish*, int> TakeOrder();
    void PrintOrder(std::map<Dish*, int> ordered_dishes);
    double CostCalculate(std::map<Dish*, int> ordered_dishes);
    double Payment(double v_price, double v_n);
    ~Seller();
    
};

