#include "Seller.h"
Seller::Seller()
{
}
Seller::Seller(std::string v_name, std::string v_organization, std::string v_position, double v_salary, int v_experience): Worker(v_name, v_organization, v_position, v_salary, v_experience)
{
}

void Seller::TakeOrder()
{
	int n;
	std::cin >> n;
	if (n > 3)
	{
		throw std::invalid_argument("Wrong number, you should peak from 1 to 3");
	}
	do
	{
		std::cin >> n;
	} while (n != 0);
	std::cout << "You've picked dish";
}
