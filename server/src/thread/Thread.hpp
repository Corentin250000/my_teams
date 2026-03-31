/*
** EPITECH PROJECT, 2026
** Thread.hpp
** File description:
** ...
*/

#pragma once

#include "../comment/Comment.hpp"
#include <iostream>
#include <vector>

class Thread {
    public:
        Thread(std::string uuid, std::string body);
        Thread(std::string uuid);
        ~Thread();

        std::string getUuid() const;
        std::string getBody() const;
    private:
        std::vector<Comment *> _listComments;
        std::string _uuid;
        std::string _body;
};
