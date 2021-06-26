#pragma once
#include<iostream>
#include "Dish.h"
class Coffee :
    public Dish
{
private:
    double price;
public:
    Coffee();
    Coffee(const std::string& v_type, double v_price);
    const std::string& Type();
    double Price();
    int Cooking_Time();
    const std::string& Info();
};

