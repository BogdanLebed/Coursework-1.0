#include<iostream>
#include<map>
#include<exception>
#include "Person.h"
#include"Visitor.h"
#include"Menu.h"
#include"Cook.h"
#include"Worker.h"
#include"Seller.h"
int main()
{
	std::map<std::string, double> menu = 
	{ {"1 Кофе: ", 12},{"2 Чай: ", 10},{"3 Пончик: ", 25}};
	setlocale(LC_ALL,"Russian");
	Menu m(menu);
	m.PrintMenu();
	Seller seller("Ivan", "Buffet", "seller", 15000, 4);
	try
	{
		seller.TakeOrder();
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << " \n";
	}
	return 0;
}