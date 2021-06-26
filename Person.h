#pragma once
#include<string>
class Person
{
private:
	std::string full_name;
public:
	Person();
	Person(const std::string& v_name);
	virtual void Info();
	virtual ~Person();
};

