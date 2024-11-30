#include "PhoneBook.hpp"

std::string toUpperCase(const std::string &str) {
	std::string result = str;
	for (char &c : result) {
		c = std::toupper(static_cast<unsigned char>(c));
	}
	return result;
}

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD(add), SEARCH(search), EXIT(exit)): ";
		if (!std::getline(std::cin, command)) {
			std::cout << "\nError reading input. Exiting.\n";
			break;
	}

	command = toUpperCase(command);
	if (command == "ADD") {
		std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	

	auto getInput = [&](const std::string &prompt) -> std::string {
				std::string input;
				while (true) {
					std::cout << prompt;
					if (!std::getline(std::cin, input)) {
						std::cout << "\nError reading input. Exiting.\n";
						exit(1);
					}
					if (input.empty()) {
						std::cout << "This field cannot be empty. Please try again.\n";
					}
					else {
						break;
					}
				}
				return input;
			};

			firstName = getInput("Enter First Name: ");
			lastName = getInput("Enter Last Name: ");
			nickname = getInput("Enter Nickname: ");
			phoneNumber = getInput("Enter Phone Number: ");
			darkestSecret = getInput("Enter Darkest Secret: ");

			Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
			phoneBook.addContact(newContact);
		}
		else if (command == "SEARCH") {
			phoneBook.searchContacts();
		}
		else if (command == "EXIT") {
			std::cout << "Exiting PhoneBook. Goodbye!\n";
			break;
		}
		else {
			std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT.\n";
		}
	}

	return 0;
}
