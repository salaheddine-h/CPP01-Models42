/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 23:06:25 by marvin            #+#    #+#             */
/*   Updated: 2026/01/08 23:06:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *PtrString = &str;
    std::string &RefString = str;
    // RefString = "SALAHEDDINE";

	std::cout << "The memory address of the string variable : " << &str << std::endl;
	std::cout << "The memory address held by stringPTR      : " << PtrString << std::endl;
	std::cout << "The memory address held by stringREF      : " << &RefString << std::endl;

	std::cout << "The value of the string variable  : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *PtrString << std::endl;
	std::cout << "The value pointed to by stringREF : " << RefString << std::endl;
    RefString = "SALAHEDDINE";
    std::cout << "The another val str = " << str << std::endl;
    std::cout << "The another val RefString = " << RefString << std::endl;
    return(0);
}
