
#include "Compte.h"
#include"MontantInvalideException.h"
#include"SoldeinsuffisantException.h"

Compte::Compte(double soldeinitial) :solde(soldeinitial){
	// TODO Auto-generated constructor stub

}

void Compte::deposer(int montant) {
    if (montant <= 0)
        throw MontantInvalideException(
            "Depot invalide : le montant doit etre strictement positif.");
    solde += montant;
}

void Compte::retirer(int montant) {
    if (montant <= 0)
        throw MontantInvalideException(
            "Retrait invalide : le montant doit etre strictement positif.");
    if (montant > solde)
        throw SoldeInsuffisantException(
            "Solde insuffisant : retrait demande superieur au solde disponible.");
    solde -= montant;
}

double Compte::getSolde() const {
    return solde;
}

Compte::~Compte() {
	// TODO Auto-generated destructor stub
}

