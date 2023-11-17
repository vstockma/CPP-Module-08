/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:23:51 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/17 14:02:15 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename Input>
void Span::addRange(Input first, Input last)
{
    size_t count = std::distance(first, last);
    if (_data.size() + count > _max_amount)
        throw std::out_of_range("Adding this range exceeds the maximum capacity of Span");

    _data.insert(_data.end(), first, last);
}

int main()
{
    Span sp = Span(10000);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    const size_t numElements = 9000;
    std::vector<int> numbers;
    numbers.reserve(numElements);
    std::srand(static_cast<unsigned int>(std::time(0)));
    for (size_t i = 0; i < numElements; ++i)
        numbers.push_back(rand() % 1000);
    try
    {
        sp.addRange(numbers.begin(), numbers.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp.shortestSpan() << std::endl;
    sp.printData();
    return 0;
}