/*
** EPITECH PROJECT, 2026
** Client.hpp
** File description:
** ...
*/

#pragma once

#include <iostream>

class Client {
    public:
        Client(std::string username);
        ~Client();

        std::string getUuid() const;
        std::string getUsername() const;
        void inverseAuthentification();
        bool getAuthentification() const;

    private:
        std::string _uuid;
        std::string _username;
        bool _isAuthentificated;
};
