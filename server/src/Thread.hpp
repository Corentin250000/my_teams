/*
** EPITECH PROJECT, 2026
** Thread.hpp
** File description:
** ...
*/

#pragma once

#include "Comment.hpp"
#include <iostream>
#include <vector>

class Thread {
    public:
        Thread();
        ~Thread();

    private:
        std::vector<Comment> _listComments;
        std::string _threadUuid;
        std::string _threadBody;
};
