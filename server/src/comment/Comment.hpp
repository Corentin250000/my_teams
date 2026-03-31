/*
** EPITECH PROJECT, 2026
** Comment.hpp
** File description:
** ...
*/

#pragma once

#include <uuid/uuid.h>
#include <iostream>
#include <vector>

class Comment {
    public:
        Comment();
        Comment(std::string contentComment);
        ~Comment();

        std::string getComment() const;
    private:
        std::string _comment;
};
