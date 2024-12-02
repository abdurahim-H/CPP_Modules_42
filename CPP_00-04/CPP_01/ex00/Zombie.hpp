#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(const std::string& name);
		~Zombie();
		void announce(void);

};

#endif