/*
** EPITECH PROJECT, 2026
** argumentsHandling.hpp
** File description:
** ...
*/

#pragma once

#include <iostream>
#include <exception>

void isNumberArgumentsValid(int ac, std::string argument);
void displayHelpMessage(int ac, std::string argument);
bool isPositiveNumber(std::string argument);
bool isInValidRange(std::string argument);
unsigned short getPort(int ac, char **av);
