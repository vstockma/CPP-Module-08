/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:19:41 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/15 16:02:57 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int>    intVector;
    std::deque<int>     intDeque;
    std::list<int>      intList;
    int n;
    std::list<int>::const_iterator it;
    std::srand(std::time(NULL));
    
    for (int i = 0; i < 25; i++)
    {
        n = rand() % 51;
        intVector.push_back(n);
        intDeque.push_front(n);
        intList.push_front(n);
    }
    for (unsigned int i = 0; i < intVector.size(); i++)
        std::cout << intVector.at(i) << " ";
    std::cout << std::endl;
    for (unsigned int i = 0; i < intDeque.size(); i++)
        std::cout << intDeque.at(i) << " ";
    std::cout << std::endl;
    intList.sort();
    for (it = intList.begin(); it != intList.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    try
    {
        easyfind(intVector, 42);
    }
    catch(std::exception& e)
    {
        std::cerr << "Exception with Vector: " << e.what() << std::endl;
    }
    try
    {
        easyfind(intDeque, 42);
    }
    catch(std::exception& e)
    {
        std::cerr << "Exception with Deque: " << e.what() << std::endl;
    }
    try
    {
        easyfind(intList, 42);
    }
    catch(std::exception& e)
    {
        std::cerr << "Exception with List: " << e.what() << std::endl;
    }
    return 0;
}