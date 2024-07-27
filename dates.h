#pragma once
#include <iostream>
#include <fstream>

class Dates {
	std::string login;
	std::string password;
	std::string word;
	int money;
	int loan;
	int deposit;
public:
	void load_login(std::string buffer) {
		this->login = buffer;
	}
	void load_password(std::string buffer) {
		this->password = buffer;
	}
	void load_word(std::string buffer) {
		this->word = buffer;
	}
	void load_money(int buffer) {
		this->money = buffer;
	}
	void load_loan(int buffer) {
		this->loan = buffer;
	}
	void load_deposit(int buffer) {
		this->deposit = buffer;
	}
	// Геттерытолько при регестрации
	void get_login() {
		std::cout << "Input your login: "; std::cin >> this->login;
	}
	void get_password() {
		while (true) {
			std::string buffer_1, buffer_2;
			std::cout << "Input your password: "; std::cin >> buffer_1;
			std::cout << "Input your password again: "; std::cin >> buffer_2;
			if (buffer_1 == buffer_2) {
				this->password = buffer_1;
				break;
			}
			else std::cout << "Return please!\n";
		}
	}
	void get_word() {
		std::cout << "Input your word: "; std::cin >> this->word;
	}


	std::string set_login() {
		return this->login;
	}
	std::string set_password() {
		return this->password;
	}
	std::string set_word() {
		return this->word;
	}
	int set_money() {
		return this->money;
	}
	int set_loan() {
		return this->loan;
	}
	int set_deposit() {
		return this->deposit;
	}
};

/*
Login
Password
Word
Money
Loan
Deposit

*/