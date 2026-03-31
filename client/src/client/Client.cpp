/*
** EPITECH PROJECT, 2026
** Client.cpp
** File description:
** ...
*/

#include "Client.hpp"

Client::Client(std::string username) : _username(username), _isAuthentificated(false) {
}

Client::~Client() {
}

std::string Client::getUuid() const {
    return _uuid;
}

std::string Client::getUsername() const {
    return _username;
}

void Client::inverseAuthentification() {
    _isAuthentificated = !_isAuthentificated;
}

bool Client::getAuthentification() const {
    return _isAuthentificated;
}
