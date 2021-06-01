#pragma once
#include<iostream>
#include<map>
#include<string>
class Menu
{
private:
	std::map<std::string, double> menu;
public:
	Menu();
	Menu(std::map<std::string, double> v_menu);
	void PrintMenu();
};

