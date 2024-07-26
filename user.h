#pragma once
#include "dates.h"

void downloading(Dates *date) {
	if (std::ifstream("D:\\DoProjects\\Bank_system\\Date\\" + date->set_login() + ".txt"))
	{
		std::ofstream file("D:\\DoProjects\\Bank_system\\Date\\" + date->set_login() + ".txt");
		file << date->set_login() << "\n" << date->set_password() << "\n" << date->set_word() << "\n" << date->set_money();
	}
	else std::cout << "Exception!";
}


void Transfer(Dates *date) {
	std::cout << "\nInput name and amount of money for transer!\n";
	std::cout << "Name: "; 
	std::string buffer_name; std::cin >> buffer_name;
	std::cout << "Money: ";
	int buffer_money; std::cin >> buffer_money;
	if (std::ifstream("D:\\DoProjects\\Bank_system\\Date\\" + buffer_name + ".txt"))
	{
		Dates t_date;
		std::ifstream fail("D:\\DoProjects\\Bank_system\\Date\\" + buffer_name + ".txt");
		std::string t_login, t_password, t_word; int t_money;
		fail >> t_login >> t_password >> t_word >> t_money;
		t_date.load_login(t_login); t_date.load_money(t_money); t_date.load_password(t_password); t_date.load_word(t_word);

		if (date->set_money() > buffer_money) {
			t_date.get_money(t_date.set_money() + buffer_money);
			date->get_money(date->set_money() - buffer_money);
			downloading(&t_date); downloading(date);
		}
		else std::cout << "Not enough money\n";

		fail.close();
	}


}

void Settings() {

}
void Loan() {

}

void Deposit() {

}

void Application(Dates *date) {
	while (true) {
		std::cout << "Login: " << date->set_login() << "\n";
		std::cout << "Password: " << date->set_password() << "\n";
		std::cout << "Word: " << date->set_word() << "\n";
		std::cout << "Money: " << date->set_money() << "\n";
		std::cout << "Input number action: \n1.Transfer \n2.Settings \n3.Loan \n4.Deposit\n";
		int buffer; std::cout << "Input: "; std::cin >> buffer;
		switch (buffer) {
		case 1: Transfer(date);
		case 2: Settings();
		case 3: Loan();
		case 4: Deposit();
	}

}
