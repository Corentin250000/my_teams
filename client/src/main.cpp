/*
** EPITECH PROJECT, 2026
** main.cpp
** File description:
** ...
*/

#include "client/Client.hpp"
#include "argumentsHandling/argumentsHandling.hpp"

int main(int ac, char **av)
{
    unsigned short port = 0;

    try {
        port = getPort(ac, av);
        (void) port;
    } catch (std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
        return 84;
    }
    return 0;
}

#include <iostream>