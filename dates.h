#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Dates {
	std::string login;
	std::string password;
	std::string word;
	int money;
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
	void set_login() {
		std::cout << "Input your login: "; std::cin >> this->login;
	}
	void set_password() {
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
	void set_word() {
		std::cout << "Input your word: "; std::cin >> this->word;
	}
	// Доделать! set_money
	void set_money() {
		std::cin >> this->money;
	} 
	std::string get_login() {
		return this->login;
	}
	std::string get_password() {
		return this->password;
	}
	std::string get_word() {
		return this->word;
	}
	int get_money() {
		return this->money;
	}
};