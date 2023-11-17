/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:28:38 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/17 13:56:00 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    _max_amount = 0;
    _data.reserve(0);
}

Span::Span(unsigned int N)
{
    _max_amount = N;
    _data.reserve(N);
}

Span::Span(const Span& copy)
{
    *this = copy;
}

Span& Span::operator=(const Span& copy)
{
    _max_amount = copy._max_amount;
    _data = copy._data;
    return *this;
}

Span::~Span()
{
}

void    Span::addNumber(int number)
{
    if (_data.size() < _max_amount)
        _data.push_back(number);
    else
        throw std::out_of_range("Span is full");
}

int    Span::shortestSpan() const
{
    if (_data.size() < 2)
        throw std::logic_error("Not enough elements to calculate span");
    
    std::vector<int>::const_iterator maxElement = std::max_element(_data.begin(), _data.end());
    int maxValue = *maxElement;
    std::vector<int>::const_iterator minElement = std::min_element(_data.begin(), _data.end());
    int minValue = *minElement;
    int difference = maxValue - minValue;
    for (size_t i = 1; i < _data.size(); ++i)
    {
        if (difference > std::abs(_data[i] - _data[i - 1]) && std::abs(_data[i] - _data[i - 1]) != 0)
            difference = std::abs(_data[i] - _data[i - 1]);
    }
    return (difference);
}

int    Span::longestSpan() const
{
    if (_data.size() < 2)
        throw std::logic_error("Not enough elements to calculate span");
    std::vector<int> sorteddata = _data;
    std::sort(sorteddata.begin(), sorteddata.end());
    return sorteddata.back() - sorteddata.front();
}

template <typename Input>
void Span::addRange(Input first, Input last)
{
    size_t count = std::distance(first, last);
    if (_data.size() + count > _max_amount)
        throw std::out_of_range("Adding this range exceeds the maximum capacity of Span");

    _data.insert(_data.end(), first, last);
}

void Span::printData() const
{
    std::cout << "Data vector: ";
    for (size_t i = 0; i < _data.size(); ++i)
    {
        std::cout << _data[i];
        if (i < _data.size() - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}
