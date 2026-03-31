/*
** EPITECH PROJECT, 2026
** Channel.hpp
** File description:
** ...
*/

#pragma once

#include "../thread/Thread.hpp"
#include <iostream>
#include <vector>

class Channel {
    public:
        Channel(std::string uuid, std::string description);
        Channel(std::string uuid);
        ~Channel();

        std::string getUuid() const;
        std::string getDescription() const;
    private:
        std::vector<Thread *> _listThreads;
        std::string _uuid;
        std::string _description;
};
