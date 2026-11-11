#include <iostream>
#include "Compte.h"
#include "MontantInvalideException.h"
#include "SoldeInsuffisantException.h"

int main() {
    Compte compte(100);
    std::cout << " Solde initial : " << compte.getSolde() <<std::endl;

    //  Depot valide
    try {
        compte.deposer(50);
        std::cout << " Depot de 50 DH. Solde = " << compte.getSolde() << "DH\n";
    } catch (const std::exception& e) {
        std::cerr << "Depot  refuse " << e.what() << "\n";
    }

    //  Depot negatif:MontantInvalideException
    try {
        compte.deposer(-20);
        std::cout << "Depot de -20 DH. Solde = " << compte.getSolde() << "DH \n";
    } catch (const MontantInvalideException& e) {
        std::cerr << " MontantInvalideException : " << e.what() << "\n";
    }

    //  Retrait valide
    try {
        compte.retirer(30);
        std::cout << " Retrait de 30 DH. Solde = " << compte.getSolde() << " DH \n";
    } catch (const std::exception& e) {
        std::cerr << "retrait refuse  " << e.what() << "\n";
    }

    //  Retrait :  SoldeInsuffisantException
    //    avec try-catch IMBRIQUES
    try {
        try {
            compte.retirer(1000);
        } catch (const SoldeInsuffisantException& e) {
            std::cerr << " interne-> SoldeInsuffisantException : "
                      << e.what() << "\n";
            throw;
        }
    } catch (const std::exception& e) {
        std::cerr << " externe -> Exception propagee et geree.\n";
    }

    // Retrait negatif avec PLUSIEURS catch
    try {
        compte.retirer(-5);
    } catch (const MontantInvalideException& e) {
        std::cerr << " MontantInvalideException : " << e.what() << "\n";
    } catch (const SoldeInsuffisantException& e) {
        std::cerr << "SoldeInsuffisantException : " << e.what() << "\n";
    } catch (const std::exception& e) {
        std::cerr << " Exception generique : " << e.what() << "\n";
    }

    std::cout << "\n Solde final : " << compte.getSolde() << " DH \n";
    return 0;
}



