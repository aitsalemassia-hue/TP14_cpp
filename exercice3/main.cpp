#include"LireFichier.h"

int main() {
    // Cas 1 : fichier existant
    try {
        cout << " Lecture de 'test.txt'" << endl;
        lireFichier("test.txt");
    }
    catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    // Cas 2 : fichier inexistant
    try {
        cout << "\n Lecture d'un fichier qui n'existe pas " << endl;
        lireFichier("data.txt");
    }
    catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    return 0;
}



