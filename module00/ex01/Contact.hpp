#ifndef CONTACT_HPP
# define CONTACT_HPP
# ifndef DEBUG
#  define DEBUG 0
# endif

#include <iostream>
#include <string>

class Contact
{
	private:

	//private atributes
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		unsigned int	phoneNumber;
		std::string		darkestSecret;

	public:

	//constructor

	Contact (void);

	//constructor with parameters

	Contact(std::string pFirstName, std::string pLastName, std::string pNickname, 
		unsigned int phoneNumber, std::string pDarkestSecret);

	//copy constructor

	Contact (const Contact& param);

	//assingment operator
	Contact& operator=(const Contact& param);

	//destructor

	~Contact (void);

	//getters and seters
	
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);

	//other methods
	
	void	print(void);

};

#endif
