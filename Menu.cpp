#include "Menu.h"
Menu::Menu()
{

}

Menu::Menu(std::map<std::string, double> v_menu)
{
	menu = v_menu;
}

void Menu::PrintMenu()
{
	for (auto i = menu.cbegin(); i != menu.end(); ++i)
	{
		std::cout << i->first << " : " << i->second << std::endl;
	}
}
