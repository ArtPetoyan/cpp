#include "phonebook.hpp"

int main()
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "Please, enter valid command (ADD, SEARCH, EXIT)\n";
		if (!std::getline(std::cin, command) || !std::cin)
			break ;
		if (command == "ADD")
			book.adding();
		else if (command == "SEARCH")
			book.searching();
		else if (command == "EXIT")
			break ;
		else
			std::cout<< "Command not found!"<< std::endl;
	}
	std::cout<< "Bye!"<< std::endl;
	return (0);
}