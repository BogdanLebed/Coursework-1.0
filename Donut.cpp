#include "Donut.h"

Donut::Donut()
{
}
Donut::Donut(const std::string& v_type, double v_price) :Dish(v_type)
{
	this->price = v_price;
}
const std::string& Donut::Type()
{
	return "Donut";
}
const std::string& Donut::Info()
{
	return "Type: " + Type() + ", price: " + std::to_string(price);
}
int Donut::Cooking_Time()
{
	return 2;
}
double Donut::Price()
{
	return price;
}
