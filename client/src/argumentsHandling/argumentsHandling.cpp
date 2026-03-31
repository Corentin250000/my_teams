/*
** EPITECH PROJECT, 2026
** argumentsHandling.cpp
** File description:
** ...
*/

#include "argumentsHandling.hpp"
#include <limits.h>
#include <string>

void displayHelpMessage(int ac, std::string argument) {
    if (ac == 2 && (argument == "-h" || argument == "--help")) {
        std::cout << "USAGE: ./myteams_cli ip port\n\n"
            "ip is the server ip address on which the server socket listens\n"
            "port is the port number on which the server socket listens" << std::endl;
        exit(0);
    }
}

void isNumberArgumentsValid(int ac, std::string argument) {
    displayHelpMessage(ac, argument);
    if (ac < 3)
        throw std::invalid_argument("Too few arguments");
    if (ac > 3)
        throw std::invalid_argument("Too many arguments");
}

bool isPositiveNumber(std::string argument) {
    for (auto i = 0; argument[i] != '\0'; i++) {
        if (argument[i] < '0' || argument[i] > '9')
            return false;
    }
    return true;
}

bool isInValidRange(std::string argument) {
    int port_int = std::stoi(argument);

    if (port_int > USHRT_MAX)
        return false;
    return true;
}

unsigned short getPort(int ac, char **av) {
    isNumberArgumentsValid(ac, av[1]);
    if (!isPositiveNumber(av[2]))
        throw std::invalid_argument("The port must be a positive number");
    if (!isInValidRange(av[2]))
        throw std::invalid_argument("The port must be between 1 and 65535");
    return static_cast<unsigned short> (std::stoi(av[2]));
}
