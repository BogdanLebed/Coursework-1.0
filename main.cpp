#include<iostream>
#include "Person.h"
#include"Visitor.h"
#include"Seller.h"
int main()
{
	setlocale(LC_ALL,"Russian");
	Person a("������ ���� ��������", "�� ����������", "�� ����������");
	std::cout << a.Info()<< std::endl;
	Seller b("���������� ������� ���������", "�����", "��������");
	std::cout << b.Info();
	return 0;
}