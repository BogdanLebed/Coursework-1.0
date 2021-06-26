#pragma once
#include "Dish.h"
class Donut :
    public Dish
{
private:
    double price;
    int time;
public:
    Donut();
    Donut(const std::string& v_type, double v_price);
    const std::string& Type();
    const std::string& Info();
    int Cooking_Time();
    double Price();
};

