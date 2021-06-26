#include<iostream>
#include"Person.h"
#include"Visitor.h"
#include"Menu.h"
#include"Cook.h"
#include"Worker.h"
#include"Seller.h"
#include"Coffee.h"
#include"Tea.h"
#include"Donut.h"
#include"Dish.h"
int main()
{
	std::vector<Dish*> dishes;
	Menu menu(dishes);
	menu.PrintMenu();
	/*menu.DishIndex(dishes);
	Cook cook("Petrov Petro Petrovich", "Buffet", "cook", 20000, 8);
	Seller seller("Ivanov Ivan Ivanovich", "Buffet", "seller", 15000, 4);
	Visitor visitor("Lebedenko Bogdan Andreevich", 0);
	std::map<Dish*, int>ordered_dishes;
	try
	{
		ordered_dishes = seller.TakeOrder();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	seller.PrintOrder(ordered_dishes);
	seller.CostCalculate(ordered_dishes);
	double total_cost = seller.CostCalculate(ordered_dishes);
	std::cout << '\n' << "Total cost: " << total_cost << std::endl;
	double v_cash;
	std::cout << "Enter sum: ";
	std::cin >> v_cash;
	visitor.SetCash(v_cash);
	double cash = visitor.GetCash();
	try
	{
		std::cout << "Your change: " << seller.Payment(total_cost, cash) << ", enjoy your meal!" << '\n';
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	cook.CookingTime(ordered_dishes);*/
	return 0;
}