/*
 * montantInvalideException.cpp
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#include "MontantInvalideException.h"

#include "MontantInvalideException.h"

MontantInvalideException::MontantInvalideException(const std::string& msg)
    : message(msg) {}

const char* MontantInvalideException::what() const noexcept {
    return message.c_str();
}

