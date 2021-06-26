#include "Seller.h"
#include"Visitor.h"
#include"Coffee.h"
#include"Menu.h"
Seller::Seller(const std::string& v_name, const std::string& v_organization, const std::string& v_position, double v_salary, int v_experience): Worker(v_name,v_organization, v_position)
{
	this->salary = v_salary;
	this->experience = v_experience;
}

void Seller::Info()
{
	Worker::Info();
	std::cout << ", salary: " << salary << ", experience: " << experience << " ";
}

std::map<Dish*, int>Seller::TakeOrder()
{
	int n;
	std::map<Dish*, int> ordered_dishes;
	const std::vector<Dish*>& dishes = {};
	Menu menu(dishes);
	do 
	{
		std::cin >> n;
		if (n >= 1 && n <= menu.DishAmount())
		{
			ordered_dishes[menu.GiveDish(n)]++;
		}
		else if (n > menu.DishAmount() || n < 0)
		{
			throw std::invalid_argument("Wrong number, peak from 1 to 3");
		}
	} while (n != 0);
	return ordered_dishes;
}
void Seller::PrintOrder(std::map<Dish*, int> ordered_dishes)// Выводим
{
	std::map<Dish*, int>::iterator it;
	for (it = ordered_dishes.begin(); it != ordered_dishes.end(); it++)
	{
		std::cout << it->first->Type() << " " << it->second << '\n';
	}
}
double Seller::CostCalculate(std::map<Dish*, int> ordered_dishes)
{
	double total_cost = 0;
	for (auto it = ordered_dishes.begin(); it != ordered_dishes.end(); it++)
	{
		 total_cost += it->first->Price() * it->second;
	}
	return total_cost;
}

double Seller::Payment(double v_price, double v_cash)
{
	if (v_cash >= v_price)
	{
		v_cash -= v_price;
		return v_cash;
	}
	else if (v_price > v_cash)
	{
		throw std::invalid_argument("Not enough money!");
	}
}
Seller::~Seller()
{
}

