#include "login.h"
#include "register.h"

int main() {
	std::cout << "What you would have: login or registration?\n";
	std::string buffer;
	std::cout << "Input: "; std::cin >> buffer;
	if (buffer == "login") login();
	else if (buffer == "registration") registration();
	else std::cout << "Your command don't exists!\n";


}