#pragma once
#include "dates.h"




void Transfer() {
	std::cout << "\nInput name and amount of money for transer!\n";
	std::cout << "Name: "; 
	std::string buffer_name; std::cin >> buffer_name;
	std::cout << "Money: ";
	int buffer_money; std::cin >> buffer_money;
	if (std::ifstream("D:\\DoProjects\\Bank_system\\Date\\" + buffer_name + ".txt"))
	{
		Dates date;
		std::ifstream fail("D:\\DoProjects\\Bank_system\\Date\\" + buffer_name + ".txt");
		std::string lLogin, lPassword, lWord; int lMoney;
		fail >> lLogin >> lPassword >> lWord >> lMoney;
		date.load_login(lLogin); date.load_password(lPassword); date.load_word(lWord); date.load_money(lMoney);
		date.get_money(buffer_money);
		fail.close();
		std::ofstream file("D:\\DoProjects\\Bank_system\\Date\\" + buffer_name + ".txt");
		file << date.set_login() << "\n" << date.set_password() << "\n" << date.set_word() << "\n" << date.set_money();
		//Доделать вычёт денег из аккаунта

		file.close();
	}


}

void Settings() {

}
void Loan() {

}

void Deposit() {

}

void Application(Dates *date) {
	std::cout << "Login: " << date->set_login() << "\n";
	std::cout << "Password: " << date->set_password() << "\n";
	std::cout << "Word: " << date->set_word() << "\n";
	std::cout << "Money: " << date->set_money() << "\n";
	while (true) {
		std::cout << "Input number action: \n1.Transfer \n2.Settings \n3.Loan \n4.Deposit";
		int buffer; std::cout << "Input: "; std::cin >> buffer;
		switch (buffer) {
		case 1: Transfer();
		case 2: Settings();
		case 3: Loan();
		case 4: Deposit();
		default:
			std::cout << "Uncorrect number!\n";
		}
	}

}
