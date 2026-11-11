#include"StockInsuffisantException.h"
#include"Produit.cpp"

int main() {
    Produit p("Clavier", 10);

    try {
        p.vendre(3);
        p.vendre(5);
        p.vendre(4);
        p.vendre(1);
    }
    catch (const StockInsuffisantException& e) {
        cout << "Erreur : " << e.what() << endl;
        cout << "Il manque " << (e.getDemande() - e.getDisponible())
             << " unite(s)." << endl;
    }

    cout << "Stock final : " << p.getStock() << endl;
    return 0;
}




