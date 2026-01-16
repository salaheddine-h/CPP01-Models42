/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:31:13 by marvin            #+#    #+#             */
/*   Updated: 2026/01/10 20:31:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug( void ) {
        std::cout << "\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do! \n" << std::endl;
}

void    Harl::info(void) {
        std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void    Harl::warning(void) {
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error(void) {
        std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void    Harl::complain(std::string name)
{
        std::string Names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        void (Harl::*functions[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
        };
        // void(Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        for (int i = 0; i < 4; i++)
        {
                if (Names[i] == name)
                {
                        (this->*functions[i])();
                        return ;
                }
        }
}

void    Harl::print_debugs()
{
        Harl    T;

        T.complain("DEBUG");
        T.complain("INFO");
        T.complain("WARNING");
        T.complain("ERROR");
}