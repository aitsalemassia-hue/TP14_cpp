#ifndef STOCK_INSUFFISANT_EXCEPTION_H
#define STOCK_INSUFFISANT_EXCEPTION_H

#include <exception>
#include <string>

class StockInsuffisantException : public std::exception {
private:
    std::string message;
    int demande;
    int disponible;

public:
    StockInsuffisantException(int d, int s);

    const char* what() const noexcept override;

    int getDemande()    const;
    int getDisponible() const;
};

#endif
