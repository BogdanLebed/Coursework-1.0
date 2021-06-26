#include "Dish.h"
#include <iostream>
Dish::Dish()
{
}
Dish::Dish(const std::string& v_type)
{
	this->type = v_type;
}
