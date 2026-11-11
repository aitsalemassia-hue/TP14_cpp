#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Produit {
private:
    std::string nom;
    int stock;

public:
    Produit(const std::string& nom, int stockInitial);

    // Lève StockInsuffisantException si quantite > stock
    void vendre(int quantite);

    int getStock() const;
};

#endif
