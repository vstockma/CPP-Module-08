/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:30:06 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/20 12:54:48 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
# include <iostream>
# include <algorithm>
# include <ctime>
# include <stdexcept>
# include <vector>
# include <deque>
# include <list>
#include <limits>
#include <cmath>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack()
        {
            std::cout << "MutantStack constructor called" << std::endl;
        }
        MutantStack(const MutantStack& copy)
        {
            *this = copy;
            std::cout << "Copy MutantStack constructor called" << std::endl;
        }
        MutantStack& operator=(const MutantStack& copy)
        {
            this->c = copy.c;
            std::cout << "MutantStack Copy assignment operator called" << std::endl;
            return *this;
        }
        ~MutantStack()
        {
            std::cout << "MutantStack destructor called" << std::endl;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        iterator begin()
        {   return this->c.begin(); }

        iterator end()
        {   return this->c.end();   }

        const_iterator begin() const
        {   return this->c.begin(); }

        const_iterator end() const
        {   return this->c.end();   }
};

#endif