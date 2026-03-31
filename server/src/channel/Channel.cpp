/*
** EPITECH PROJECT, 2026
** Channel.cpp
** File description:
** ...
*/

#include "Channel.hpp"

Channel::Channel(std::string uuid, std::string description) : _uuid(uuid), _description(description) {
}

Channel::Channel(std::string uuid) : _uuid(uuid), _description("") {
}

Channel::~Channel() {
}

std::string Channel::getUuid() const {
    return _uuid;
}

std::string Channel::getDescription() const {
    return _description;
}
