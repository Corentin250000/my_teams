/*
** EPITECH PROJECT, 2026
** Server.cpp
** File description:
** ...
*/

#include "Server.hpp"

Server::Server(unsigned short port) : _port(port), _delaySave(5) {
}

Server::~Server() {
}

unsigned short Server::getPort() const {
    return _port;
}

int Server::getDelaySave() const {
    return _delaySave;
}
