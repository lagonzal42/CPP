/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:35:50 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/12 10:35:50 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    public:
        //constructor
        Intern(void);
        
        //copy constructor
        Intern(const Intern& param);
        
        //destructor
        ~Intern(void);
        
        //assingment operator overload
        Intern& operator=(const Intern& param);

        //mandatory
        AForm*  makeForm(std::string pName, std::string pTarget);

        class InvalidFormNameException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Intern::Invalid form name");
                }
        };
};


#endif
