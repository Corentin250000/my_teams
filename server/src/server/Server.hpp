/*
** EPITECH PROJECT, 2026
** Server.hpp
** File description:
** ...
*/

#pragma once

#include "../team/Team.hpp"
#include <iostream>
#include <vector>

class Server {
    public:
        Server(unsigned short port);
        ~Server();

        unsigned short getPort() const;
        int getDelaySave() const;
    private:
        unsigned short _port;
        int _delaySave; // In minutes
        std::vector<Team *> _listTeams;
};
