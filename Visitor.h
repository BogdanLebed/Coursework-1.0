#pragma once
#include "Person.h"
#include"Seller.h"
class Visitor :
    public Person
{
private:
    double cash;
public:
    void Info();
    Visitor();
    Visitor(const std::string& v_name, double v_cash);
    void SetCash(double v_n);
    double GetCash();
    ~Visitor();
};

