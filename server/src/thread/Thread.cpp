/*
** EPITECH PROJECT, 2026
** Thread.cpp
** File description:
** ...
*/

#include "Thread.hpp"

Thread::Thread(std::string uuid, std::string body) : _uuid(uuid), _body(body) {
}

Thread::Thread(std::string uuid) : _uuid(uuid), _body("") {
}

Thread::~Thread() {
}

std::string Thread::getUuid() const {
    return _uuid;
}

std::string Thread::getBody() const {
    return _body;
}
