#include "SoldeInsuffisantException.h"

SoldeInsuffisantException::SoldeInsuffisantException(const std::string& msg)
    : message(msg) {}

const char* SoldeInsuffisantException::what() const noexcept {
    return message.c_str();
}
