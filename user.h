#pragma once
#include "dates.h"

void Application(Dates *date) {
	std::cout << "Login: " << date->get_login() << "\n";
	std::cout << "Password: " << date->get_password() << "\n";
	std::cout << "Word: " << date->get_word() << "\n";
	std::cout << "Money: " << date->get_money() << "\n";
}
