#include <iostream>
#include <stdexcept>
using namespace std;

// Fonction qui divise a par b et lève une exception si b == 0
double diviser(int a, int b) {
    if (b == 0)
        throw runtime_error("Division par zero impossible !");
    return (double)a / b;
}

int main() {
    try {
        cout << "10 / 2 = "<<diviser(10, 2) << endl;
        cout << "0 / 2 = "<<diviser(0, 2) << endl;
        cout << " -3 / 4 = "<<diviser(-3, 4)  << endl;
        cout << " 7 /0 = "<<diviser(7, 0)  << endl;

    }
    catch (const exception& e) {
        cout << "Erreur : " << e.what() << endl;
    }
    return 0;
}
