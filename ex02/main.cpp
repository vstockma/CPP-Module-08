/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:34:22 by vstockma          #+#    #+#             */
/*   Updated: 2023/11/20 16:04:35 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    //MutantStack
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    //This line prints the top element of the stack
    std::cout << mstack.top() << std::endl;

    //This line removes the top element from the stack.
    mstack.pop();

    //Print the size of the stack:
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << std::endl;
    std::cout << std::endl;

    // Test const functions
    const MutantStack<int> constMutantStack(mstack);

    // Iterate over the elements using const_iterator
    std::cout << "Const MutantStack elements using const_iterator: ";
    for (MutantStack<int>::const_iterator it = constMutantStack.begin(); it != constMutantStack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //Same main but with std::list
    // std::list<int> myList;

    // myList.push_back(5);
    // myList.push_back(17);

    // std::cout << myList.back() << std::endl;

    // myList.pop_back();

    // std::cout << myList.size() << std::endl;

    // myList.push_back(3);
    // myList.push_back(5);
    // myList.push_back(737);
    // //[...]
    // myList.push_back(0);

    // std::list<int>::iterator it_list = myList.begin();
    // std::list<int>::iterator ite_list = myList.end();

    // ++it_list;
    // --it_list;
    // while (it_list != ite_list) {
    //     std::cout << *it_list << std::endl;
    //     ++it_list;
    // }

    // std::stack<int, std::list<int> > s_list(myList);
    
}