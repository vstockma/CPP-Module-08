/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:24:29 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/16 15:19:05 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <ctime>
# include <stdexcept>
# include <vector>
# include <deque>
# include <list>
#include <limits>
#include <cmath>

class Span
{
    private:
        unsigned int _max_amount;
        std::vector<int> _data;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();
        void    addNumber(int number);
        int     shortestSpan() const;
        int     longestSpan() const;
        
};

#endif
