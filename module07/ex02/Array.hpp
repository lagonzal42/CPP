/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:44:31 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/26 13:44:31 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T*				_ptr;
		size_t			_size;
	public:
		//Default constructor
		Array(void);
		
		//Copy constructor
		Array(const Array& param);

		//Parameter constructor
		Array(size_t pSize);

		//Default destructor;
		~Array(void);

		//Assignment operator overload
		Array&	operator=(const Array& param);

		//Index operator overload
		T&		operator[](int index) const;

		size_t	size(void) const;

		class IndexOutOfBoundsException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Index is out of bounds");
				}
		};
};


template <typename T>
Array<T>::Array(void)
{
	std::cout << "Default constructor called" << std::endl;
	_ptr = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(const Array& param)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = param;
}

template <typename T>
Array<T>::Array(size_t pSize)
{
	std::cout << "Parameter constructor called" << std::endl;
	if (pSize > 0)
	{
		_size = pSize;
		_ptr = new T [pSize];
	}
	else
	{
		_ptr = NULL;
		_size = 0;
	}
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Default destructor called" << std::endl;
	if (_size > 0)
		delete[] _ptr;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& param)
{
	if (this != &param)
	{
		this->_size = param.size();
		this->_ptr = new T [this->_size];
		for (size_t x = 0; x < this->_size; x++)
			_ptr[x] = param[x]; 
	}
	return (*this);
}

template <typename T>
T&		Array<T>::operator[](int index) const
{
	if (index < 0 || index >= (int)this->_size)
		throw(IndexOutOfBoundsException());
	return (this->_ptr[index]);
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return (_size);
}


#endif //ARRAY_HPP