#include "Tea.h"

Tea::Tea()
{
}
Tea::Tea(const std::string& v_type, double v_price):Dish(v_type)
{
	this->price = v_price;
}

double Tea::Price()
{
	return price;
}
const std::string& Tea::Type()
{
	return "Tea";
}
int Tea::Cooking_Time()
{
	return 1;
}
const std::string& Tea::Info()
{
	return "Type: " + Type() + ", price: " + std::to_string(price);
}
