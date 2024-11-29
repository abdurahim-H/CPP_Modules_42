#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0) {}

void PhoneBook::addContact(const Contact &newContact)
{
	if (contactCount < 8) {
		contacts[contactCount] = newContact;
		contactCount++;
	}
	else {
		contacts[oldestIndex] = newContact;
		oldestIndex = (oldestIndex + 1) % 8;
	}
	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::displayContacts() const {
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string cyan = "\033[36m";
	const std::string line = "\033[90m━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\033[0m";

	for (int i = 0; i < contactCount; ++i) {
		std::cout << cyan;
		contacts[i].displaySummary(i + 1);
		std::cout << reset;
	}
	std::cout << line << std::endl;
}

void PhoneBook::searchContacts() const {
	if (contactCount == 0) {
		std::cout << "PhoneBook is empty. Add some contacts first.\n";
		return;
	}
	displayContacts();

	std::cout << "Enter the index of the contact to display: ";
	std::string input;
	if (!std::getline(std::cin, input)) {
		std::cout << "\nError reading input.\n";
		return;
	}

	int index;
	try {
		index = std::stoi(input);
	}
	catch (std::exception &e) {
		std::cout << "Invalid index. Please enter a number.\n";
		return;
	}

	if (index < 1 || index > contactCount) {
		std::cout << "Index out of range. Please try again.\n";
		return;
	}

	displayContactDetails(index - 1);
}

void PhoneBook::displayContactDetails(int index) const {
	contacts[index].displayDetails();
}