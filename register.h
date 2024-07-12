#pragma once
#include "dates.h"

void registration() {
	Dates date;
	while (true) {
		date.set_login();
		date.set_password();
		date.set_word();

		if (std::ifstream("D:\\DoProjects\\Bank_system\\Date\\" + date.get_login() + ".txt"))
		{
			std::cout << "Login already exists" << std::endl;
		}
		else break;
	}
	std::ofstream fail("D:\\DoProjects\\Bank_system\\Date\\" + date.get_login() + ".txt");
	fail << date.get_login() << "\n" << date.get_password() << "\n" << date.get_word() << "0";

	fail.close();
}
// Сделать выход из регистрации