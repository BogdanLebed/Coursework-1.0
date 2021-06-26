#pragma once
#include<string>
class Dish
{
private:
	std::string type;
public:
	Dish();
	Dish(const std::string& v_type);
	virtual const std::string& Type() = 0;
	virtual const std::string& Info() = 0;
	virtual double Price() = 0;
	virtual int Cooking_Time() = 0;
};

