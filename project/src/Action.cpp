#include <iostream>
#include "Action.hpp"

Action::Action () {};
Action::~Action () {};

void Action::action()	{
	std::cout << "Instantiation impossible!" << std::endl;
}
