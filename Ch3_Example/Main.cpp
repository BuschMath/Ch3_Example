#include <iostream>
#include <string>

int main()
{
	std::string firstName = "Tony";
	std::string lastName = "Stark";

	std::string fullName = firstName + " " + lastName;

	std::cout << firstName << " has " << firstName.length() << " characters in it.\n";
	std::cout << fullName << " has " << fullName.length() << " characters in it.\n";

	// remember 0 indexed, finds the first occurance
	std::cout << "The space between first name and last name is character: " << fullName.find(" ") << std::endl; 

	std::cout << "This is a substring: " << fullName.substr(3, 5) << std::endl;

	return 0;
}
