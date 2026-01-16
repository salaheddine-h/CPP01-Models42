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
    // here created a space in stack off memory
    // str = "HI THIS IS BRAIN"
    // &str = "0x7fff830fc9b0" 
    std::string *PtrString = &str;
    // *PtrString = "HI THIS IS BRAIN"
    // PtrString = "0x7fff830fc9b0" this pointer its has val to the first var ptr = &str
    std::string &RefString = str;
    // &RefString = str;
    // is just alias Ref
    // is str = salah is the best in the world 
    // alias to str is also have the same val and the same adress

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
