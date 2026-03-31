/*
** EPITECH PROJECT, 2026
** Comment.cpp
** File description:
** ...
*/

#include "Comment.hpp"

Comment::Comment() : _comment("") {
}

Comment::Comment(std::string comment) : _comment(comment) {
}

Comment::~Comment() {
}

std::string Comment::getComment() const {
    return _comment;
}
