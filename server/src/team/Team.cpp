/*
** EPITECH PROJECT, 2026
** Team.cpp
** File description:
** ...
*/

#include "Team.hpp"

Team::Team(std::string uuid, std::string description) : _uuid(uuid), _description(description) {
}

Team::Team(std::string uuid) : _uuid(uuid), _description("") {
}

Team::~Team() {
}

std::string Team::getUuid() const {
    return _uuid;
}

std::string Team::getDescription() const {
    return _description;
}
