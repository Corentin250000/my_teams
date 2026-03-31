/*
** EPITECH PROJECT, 2026
** Team.hpp
** File description:
** ...
*/

#pragma once

#include "Channel.hpp"
#include <iostream>
#include <vector>

class Team {
    public:
        Team();
        ~Team();

    private:
        std::vector<Channel> _listChannels;
        std::string _teamUuid;
        std::string _teamDescription;
};
