
#include "StockInsuffisantException.h"

StockInsuffisantException::StockInsuffisantException(int d, int s)
    : demande(d), disponible(s) {
    message = "Stock insuffisant : demande = " + std::to_string(d)
            + ", disponible = " + std::to_string(s);
}

const char* StockInsuffisantException::what() const noexcept {
    return message.c_str();
}

int StockInsuffisantException::getDemande() const {
    return demande;
}

int StockInsuffisantException::getDisponible() const {
    return disponible;
}
