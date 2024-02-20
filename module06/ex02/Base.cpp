/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:03:20 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 15:31:25 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

//default constructor

Base::Base(void)
{
	std::cout << "Default constructor called" << std::endl;
}


//copy constructor
Base::Base(const Base&)
{
	std::cout << "Copy constructor called" << std::endl;
	return;
}

 Base& Base::operator=(const Base&)
{
	std::cout << "= operator overwriting method called" << std::endl;
	return *this;
}

//default destructor

Base::~Base(void)
{
	std::cout << "Default destructor called" << std::endl;
}

//other methods

Base*	Base::generate(void)
{
	Base	*generated;
	std::srand(std::time(0));
	int random = std::rand();
	
	//std::cout << "Random number is " << random << std::endl;

	if (random % 3 == 0)
		generated = new A();
	else if (random % 2 == 0)
		generated = new B();
	else
		generated = new C();
	return (generated);
}

void	Base::identify(Base *p)
{
	A *aTest;
	aTest = dynamic_cast<A*>(p);
	if (aTest)
		std::cout << "Type identified: A" << std::endl;
	B *bTest;
	bTest = dynamic_cast<B*>(p);
	if (bTest)
		std::cout << "Type identified: B" << std::endl;
	C *cTest;
	cTest = dynamic_cast<C*>(p);
	if (cTest)
		std::cout << "Type identified: C" << std::endl;
	if (!aTest && !bTest && !cTest)
		std::cout << "Non type identified" << std::endl;
}

void	Base::identify(Base& p)
{
	std::string identity = p.identityCheck();
	if (identity == "A")
		std::cout << "The original class is A" << std::endl;
	else if (identity == "B")
		std::cout << "The original class is B" << std::endl;
	else if (identity == "C")
		std::cout << "The original class is C" << std::endl;
	else if (identity == "Base")
		std::cout << "The original class is Base" << std::endl;
	else
		std::cout << "The original class is unknown" << std::endl;
}

std::string Base::identityCheck(void)
{
	return ("Base");
}
