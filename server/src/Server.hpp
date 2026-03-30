/*
** EPITECH PROJECT, 2026
** Server.hpp
** File description:
** ...
*/

#pragma once

class Server {
    public:
        Server(unsigned short port) : _port(port), _delaySave(5) {}
        ~Server();

    private:
        unsigned short _port;
        int _delaySave; // In minutes
};
