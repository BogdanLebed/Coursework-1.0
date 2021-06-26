#include "Visitor.h"
#include <iostream>
void Visitor::Info()
{

}

Visitor::Visitor()
{
}
Visitor::Visitor(const std::string& v_name, double v_cash): Person(v_name)
{
	this->cash = v_cash;
}

void Visitor::SetCash(double v_n) // ¬вести деньги
{
	v_n = cash;
}
double Visitor::GetCash()
{
	return cash;
}
Visitor::~Visitor()
{
}