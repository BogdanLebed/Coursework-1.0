#include "Coffee.h"

Coffee::Coffee()
{
	price = 0;
}

Coffee::Coffee(const std::string& v_type,double v_price): Dish(v_type)
{
	this->price = v_price;
}
const std::string& Coffee::Type()
{
	return "Coffee";
}
double Coffee::Price()
{
	return price;
}
int Coffee::Cooking_Time()
{
	return 1;
}
const std::string& Coffee::Info()
{
	return "Type: " + Type() + ", price: " + std::to_string(price);
}

