#include "Contact.hpp"

Contact::Contact()
	: firstName(""), lastName(""), nickname(""),
	phoneNumber(""), darkestSecret("") {}

Contact::Contact(const std::string &firstName, const std::string &lastName,
				const std::string &nickname, const std::string &phoneNumber,
				const std::string &darkestSecret)
	: firstName(firstName), lastName(lastName), nickname(nickname),
	phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

void Contact::setFirstName(const std::string &firstName) {
	this->firstName = firstName;
}
void Contact::setLastName(const std::string &lastName) {
	this->lastName = lastName;
}
void Contact::setNickname(const std::string &nickName) {
	this->nickname = nickName;
}
void Contact::setPhoneNumber(const std::string &phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
	return lastName;
}

std::string Contact::getNickname() const {
	return nickname;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}

// void Contact::displayDetails() const {
// 	std::cout << "First Name: " << firstName << std::endl;
// 	std::cout << "Last Name: " << lastName << std::endl;
// 	std::cout << "Nickname: " << nickname << std::endl;
// 	std::cout << "Phone Number: " << phoneNumber << std::endl;
// 	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
// }

// void Contact::displaySummary(int index) const {
// 	std::cout << std::setw(5) << index << " | "
// 				<< std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << " | "
// 				<< std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << " | "
// 				<< std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << std::endl;
// }

void Contact::displayDetails() const {
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string green = "\033[32m";
	const std::string line = "\033[90m━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\033[0m";

	std::cout << line << std::endl;
	std::cout << bold << blue << "Contact Details" << reset << std::endl;
	std::cout << line << std::endl;

	std::cout << green << "First Name      : " << reset << firstName << std::endl;
	std::cout << green << "Last Name       : " << reset << lastName << std::endl;
	std::cout << green << "Nickname        : " << reset << nickname << std::endl;
	std::cout << green << "Phone Number    : " << reset << phoneNumber << std::endl;
	std::cout << green << "Darkest Secret  : " << reset << darkestSecret << std::endl;

	std::cout << line << std::endl;
}


void Contact::displaySummary(int index) const {
	auto formatField = [](const std::string& field) {
		return field.length() > 10 ? field.substr(0, 9) + "." : field;
	};

	const std::string reset = "\033[0m";
	const std::string blue = "\033[34m";
	const std::string cyan = "\033[36m";
	const std::string bold = "\033[1m";
	const std::string line = "\033[90m━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\033[0m";

	if (index == 1) {
		std::cout << line << std::endl;
		std::cout << bold << blue << std::setw(5) << "ID" << " │ "
					<< std::setw(10) << "First Name" << " │ "
					<< std::setw(10) << "Last Name" << " │ "
					<< std::setw(10) << "Nickname" << reset << std::endl;
		std::cout << line << std::endl;
	}
	std::cout << cyan << std::setw(5) << index << " │ "
				<< std::setw(10) << formatField(firstName) << " │ "
				<< std::setw(10) << formatField(lastName) << " │ "
				<< std::setw(10) << formatField(nickname) << reset << std::endl;
}
