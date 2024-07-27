#pragma once
#include "dates.h"
#include "login.h"

void registration() {
	Dates date;
	while (true) {
		date.get_login();
		date.get_password();
		date.get_word();

		if (std::ifstream("D:\\DoProjects\\Bank_system\\Date\\" + date.set_login() + ".txt"))
		{
			std::cout << "Login already exists" << std::endl;
		}
		else break;
	}
	std::ofstream fail("D:\\DoProjects\\Bank_system\\Date\\" + date.set_login() + ".txt");
	fail << date.set_login() << "\n" << date.set_password() << "\n" << date.set_word() << "\n" << "0\n"  "0\n"  << "0";
	fail.close();

	login();
}
// Сделать выход из регистрации