/*
** EPITECH PROJECT, 2026
** Channel.hpp
** File description:
** ...
*/

#pragma once

#include "Thread.hpp"
#include <iostream>
#include <vector>

class Channel {
    public:
        Channel();
        ~Channel();

    private:
        std::vector<Thread> _listThreads;
        std::string _channelUuid;
        std::string _channelDescription;
};
