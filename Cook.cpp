#include "Cook.h"

Cook::Cook()
{

}

Cook::Cook(std::string v_name, std::string v_organization, std::string v_position):Person(v_name, v_organization, v_position)
{
	full_name = v_name;
	organization = v_organization;
	position = v_position;
}
