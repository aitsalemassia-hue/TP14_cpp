#include"LireFichier.h"
#include <fstream>

#include <stdexcept>

void lireFichier(const string& nomFichier) {
    ifstream fichier(nomFichier);

    // Vérification : le fichier a-t-il pu être ouvert ?
    if (!fichier.is_open()) {
        throw runtime_error("Impossible d'ouvrir le fichier : " + nomFichier);
    }

    // Lecture ligne par ligne
    string ligne;
    int numero = 1;
    while (getline(fichier, ligne)) {
        cout << numero++ << " : " << ligne << endl;
    }

    fichier.close();
}



