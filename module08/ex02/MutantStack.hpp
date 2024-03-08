/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:47:42 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/28 12:47:42 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <iterator>


template<typename T>
class MutantStack
{
	private:
		std::deque<T> 			_ms;
	
	public:
		typedef typename std::deque<T>::iterator	iterator;
        typedef typename std::deque<T>::const_iterator const_iterator; // Add this line

		
		MutantStack(void);
		MutantStack(const MutantStack& param);
		~MutantStack(void);
		MutantStack& operator = (const MutantStack& param);



		void	push(const T& in);
		void	pop(void);
		T&		top(void);
		bool	empty(void);
		size_t	size(void);
		
		iterator begin(void);
		iterator end(void);
};

template<typename T>
MutantStack<T>::MutantStack(void)
{
    _ms = std::deque<T>();
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& param)
{
    *this = param;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{}

template<typename T>
MutantStack<T>&    MutantStack<T>::operator=(const MutantStack<T>& param)
{
    if (this != &param)
        _ms = param.ms;
    return (*this);
}

template<typename T>
void    MutantStack<T>::push(const T& in) 
{
    _ms.push_back(in);
}

template<typename T>
void    MutantStack<T>::pop(void)
{
    _ms.pop_back();
}

template<typename T>
T&  MutantStack<T>::top(void)
{
    return (_ms.back());
}

template<typename T>
bool    MutantStack<T>::empty(void)
{
    return (_ms.empty());
}

template<typename T>
size_t  MutantStack<T>::size(void)
{
    return (_ms.size());
}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return (_ms.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return (_ms.end());
}

#endif //MUTANTSTACK_HPP
