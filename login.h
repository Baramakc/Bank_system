#pragma once
#include "dates.h"
#include "user.h"

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
			std::string lLogin, lPassword, lWord; int lMoney, lLoan, lDeposit;
			fail >> lLogin >> lPassword >> lWord >> lMoney >> lLoan >> lDeposit;
			date.load_login(lLogin); date.load_password(lPassword); date.load_word(lWord); 
			date.load_money(lMoney); date.load_loan(lLoan); date.load_deposit(lDeposit);
		}
		if (login == date.set_login() && password == date.set_password()) {
			std::cout << "Authorization completed\n";
			Application(&date);
		}
		else std::cout << "Incorrect login or password";
	}
	else std::cout << "Your login don't exists";
}