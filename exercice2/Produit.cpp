#include<iostream>
#include<string>
using namespace std;
#include"StockInsuffisantException.h"
class Produit {
private:
    string nom;
    int stock;

public:
    Produit(const string& nom, int stockInitial)
        : nom(nom), stock(stockInitial) {}

    // Méthode vendre : lève une exception si le stock est insuffisant
    void vendre(int quantite) {
        if (quantite > stock) {
            throw StockInsuffisantException(quantite, stock);
        }
        stock -= quantite;
        cout << "Vente de " << quantite << " unite(s) de '"
             << nom << "'. Stock restant : " << stock << endl;
    }

    int getStock() const { return stock; }
};
