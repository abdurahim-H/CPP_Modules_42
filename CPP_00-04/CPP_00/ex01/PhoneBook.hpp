#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int contactCount;
		int oldestIndex;
	
	public:
		PhoneBook();
	
	void addContact(const Contact &newContact);
	void searchContacts() const;
	void displayContacts() const;
	void displayContactDetails(int index) const;
};

#endif
