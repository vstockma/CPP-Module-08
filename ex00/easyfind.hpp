/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:20:10 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/15 16:25:39 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <ctime>
# include <stdexcept>
# include <vector>
# include <deque>
# include <list>

template <typename T>
void    easyfind(const T& container, int value)
{
    typename T::const_iterator it;

    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::out_of_range("Number couldnt be found");
    else
        std::cout << value << " was found at " << std::distance(container.begin(), it) << std::endl;
}
#endif