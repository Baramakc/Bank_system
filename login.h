#pragma once
#include "dates.h"

void login() {
	Dates date;
	std::string login;
	std::string password;
	std::cout << "Input your login: "; std::cin >> login;
	std::cout << "Input your password: "; std::cin >> password;
	if (std::ifstream("D:\\DoProjects\\Bank_system\\Date\\" + login + ".txt"))
	{
		{
			std::ifstream fail("D:\\DoProjects\\Bank_system\\Date\\" + login + ".txt");
			std::string lLogin, lPassword, lWord; int lMoney;
			fail >> lLogin >> lPassword >> lWord >> lMoney;
			date.load_login(lLogin); date.load_password(lPassword); date.load_word(lWord); date.load_money(lMoney);
		}
		if (login == date.get_login() && password == date.get_password()) {
			std::cout << "Authorization completed";
		}
		else std::cout << "Incorrect login or password";
	}
	else std::cout << "Your login don't exists";
}