//#include <iostream>
//#include <string>;
//
//int main() {
//	// task 1
//	/*
//	std::string email;
//
//	std::cout << "Enter email: ";
//	
//	std::getline(std::cin, email);
//
//	auto dog = email.find("@");
//
//	if (dog == std::string::npos) {
//		std::cout << "error";
//		return 404;
//	}
//
//	std::string name = email.substr(0, dog);
//	std::string domen = email.substr(dog + 1);
//
//	std::cout << "Name: " << name << std::endl;
//	std::cout << "Domen: " << domen << std::endl;
//	*/
//	//task 2
//	std::string text;
//	std::string badword;
//
//	std::cout << "Enter a text: ";
//	std::getline(std::cin, text);
//
//	std::cout << "Enter the forbidden word: ";
//	std::getline(std::cin, badword);
//
//	auto pos = text.find(badword);
//
//	if (pos != std::string::npos) {
//		text.replace(pos, badword.length(), "****");
//	}
//	else {
//		std::cout <<std::endl << "Forbidden word was not found in the text" << std::endl;
//	}
//	std::cout << std::endl;
//	std::cout << "Filtered result:" << std::endl;
//	std::cout << text << std::endl;
//}