#include <iostream>

using namespace std;

double importo_pieno(double benzina, double tariffa_base = 2.5, double sconto = 0.15, double iva = 0.22) {
    double importo;
    if (benzina <= 50) {
        importo = benzina * tariffa_base;
    } else {
        importo = 50 * tariffa_base + (benzina - 50) * (tariffa_base - tariffa_base * sconto);
    }
    return importo * (1 + iva);
}

int main() {
    double benzina;
    cout  << "Inserire il consumo di benzina mensile (in litri): ";
    cin >> benzina;
    double importo = importo_pieno(benzina);
    cout << "L'importo da pagare per fare un pieno alla tua automobile e': " << importo << " euro." << endl;
    return 0;
}
