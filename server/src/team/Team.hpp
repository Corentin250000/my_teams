/*
** EPITECH PROJECT, 2026
** Team.hpp
** File description:
** ...
*/

#pragma once

#include "../channel/Channel.hpp"
#include <iostream>
#include <vector>

class Team {
    public:
        Team(std::string uuid, std::string description);
        Team(std::string uuid);
        ~Team();

        std::string getUuid() const;
        std::string getDescription() const;
    private:
        std::vector<Channel *> _listChannels;
        std::string _uuid;
        std::string _description;
};
