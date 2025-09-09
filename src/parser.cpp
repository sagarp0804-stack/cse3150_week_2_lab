#include <iostream>
#include "parser.h"
#include <string>

namespace StringUtils{
	void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){

		*firstName = fullName.substr(0, fullName.find(' '));
		*lastName = fullName.substr(fullName.find(' ') + 1);
		}			


	std::string getUsername(const std::string& email){
		
		return email.substr(0, email.find('@'));
	}

}

