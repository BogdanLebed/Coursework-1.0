#include<iostream>
#include "Person.h"
#include"Visitor.h"
#include"Seller.h"
int main()
{
	setlocale(LC_ALL,"Russian");
	Person a("Иванов Иван Иванович", "Не определено", "Не определено");
	std::cout << a.Info()<< std::endl;
	Seller b("Алексеенко Николай Андреевич", "Буфет", "Продавец");
	std::cout << b.Info();
	return 0;
}