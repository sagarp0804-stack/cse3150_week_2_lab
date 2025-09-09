#include <iostream>
#include <string>
#include "parser.h"

int main(){
	std::string fullName;
	std::string email;


	std::cout << "Enter full name: ";
	std::getline(std::cin, fullName);


	std::cout << "Enter email: ";
	std::getline(std::cin, email);

	std::string* firstName = new std::string;
	std::string* lastName = new std::string;


	StringUtils::parseName(fullName, firstName, lastName);
	
	std::string username = StringUtils::getUsername(email);


	std::cout << "First name: " << *firstName << std::endl;
	std::cout << "Last name: " << *lastName << std::endl;
	std::cout << "Username: " << username << std::endl;


	delete firstName;
	delete lastName;
	return 0;

}
