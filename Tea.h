#pragma once
#include "Dish.h"
#include<iostream>
class Tea :
    public Dish
{
private:
    double price;
    int time;
public:
    Tea();
    Tea(const std::string& v_type, double v_price);
    const std::string& Type();
    double Price();
    int Cooking_Time();
    const std::string& Info();
};

