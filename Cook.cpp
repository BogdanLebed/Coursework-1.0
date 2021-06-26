#include "Cook.h"
Cook::Cook()
{
}

Cook::Cook(const std::string& v_name, const std::string& v_organization, const std::string& v_position, double v_salary, int v_experience): Worker(v_name ,v_organization, v_position)
{
	this->salary = v_salary;
	this->experience = v_experience;
}

void Cook::CookingTime(std::map<Dish*, int> ordered_dishes)
{
	int total_time = 0;
	for (auto it = ordered_dishes.begin(); it != ordered_dishes.end(); it++)
	{
		total_time += it->first->Cooking_Time() * it->second;
	}
	if (total_time == 1)
	{
		std::cout << "Total cooking time: " << total_time << " minute" << '\n';
	}
	else if (total_time > 1)
	{
		std::cout << "Total cooking time: " << total_time << " minutes" << '\n';
	}
}
