/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:30:06 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/17 14:14:21 by vstockma         ###   ########.fr       */
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
    private:
    
    public:
        MutantStack()
        {
        }
        MutantStack(const MutantStack& copy)
        {
            *this = copy;
        }
        MutantStack& operator=(const MutantStack& copy)
        {
            
        }
        ~MutantStack()
        {
        }
};

#endif