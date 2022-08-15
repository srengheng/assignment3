#include "Human.h"
#include <iostream>

Human::Human() {}

Human::~Human() {}

void Human::setmove()
{
	std::cout << "Enter move: ";
	std::cin >> this->move;
}