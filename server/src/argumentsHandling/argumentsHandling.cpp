/*
** EPITECH PROJECT, 2026
** argumentsHandling.cpp
** File description:
** ...
*/

#include "argumentsHandling.hpp"
#include <limits.h>

void isNumberArgumentsValid(int ac)
{
    if (ac < 2)
        throw std::invalid_argument("Too few arguments");
    if (ac > 2)
        throw std::invalid_argument("Too many arguments");
}

void displayHelpMessage(std::string argument) {
    if (argument == "-h" || argument == "--help") {
        std::cout << "USAGE: ./myteams_server port\n\n"
            "port is the port number on which the server socket listens" << std::endl;
        exit(0);
    }
}

bool isPositiveNumber(std::string argument) {
    displayHelpMessage(argument);
    for (auto i = 0; argument[i] != '\0'; i++) {
        if (argument[i] < '0' || argument[i] > '9')
            return false;
    }
    return true;
}

bool isInValidRange(std::string argument) {
    int port_int = stoi(argument);

    if (port_int > USHRT_MAX)
        return false;
    return true;
}

unsigned short getPort(int ac, std::string argument) {
    isNumberArgumentsValid(ac);
    if (!isPositiveNumber(argument))
        throw std::invalid_argument("The port must be a positive number");
    if (!isInValidRange(argument))
        throw std::invalid_argument("The port must be between 1 and 65535");
    return static_cast<unsigned short> (stoi(argument));
}
