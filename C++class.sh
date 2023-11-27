#!/bin/bash

# creation of files

touch "$1.cpp" 
touch "$1.hpp"

CPP="$1.cpp"
HPP="$1.hpp"
DEF="$1"  | tr '[:lower:]' '[:upper:]' >> "$HPP"

cppheader "$CPP"
cppheader "$HPP"

# header definition

 echo -n "#ifndef " >> "$HPP"
 echo -n "$1"  | tr '[:lower:]' '[:upper:]' >> "$HPP"
 echo "_HPP" >> "$HPP"
 echo -n "# define " >> "$HPP"
 echo -n "$1" | tr '[:lower:]' '[:upper:]' >> "$HPP"
 echo "_HPP" >> "$HPP"
 echo "# ifndef DEBUG" >> "$HPP"
 echo "#  define DEBUG 0" >> "$HPP"
 echo "# endif" >>"$HPP"


# class definition
cat << EOF >> "$HPP"

class $1
{
	private:

	//private atributes
		int x;
		int y;

	public:

	//constructor

	$1 (void);

	//constructor with parameters

	$1 (int pX, int pY);

	//copy constructor

	$1 (const $1& param);

	//assingment operator
$1& operator=(const $1& param);

	//destructor

	~$1 (void);

	//getters and seters

};
#endif
EOF

cat << EOF >>"$CPP"
#include "$HPP"
#include <iostream>

//default constructor

$1::$1(void)
{
	std::cout << "Default constructor called" << std::endl;
}

//constructor with parameters

$1::$1(int pX, int pY) : x(pX), y(pY)
{
	std::cout << "Parameter constructor called" << std::endl;
	return;
}

//copy constructor
$1::$1(const $1& param) : x(param.x), y(param.y)
{
	std::cout << "Copy constructor called" << std::endl;
	return;
}

 $1& $1::operator=(const $1& param)
{
	std::cout << "= operator overwriting method called" << std::endl;
	if (this != &param)
	{
		this->x = param.x;
		this->y = param.y;
	}
	return *this;
}

//default destructor

$1::~$1(void)
{
	std::cout << "Default destructor called" << std::endl;
}

//geters and seters

EOF
