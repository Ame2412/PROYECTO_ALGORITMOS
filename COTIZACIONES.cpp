#include <iostream>
using namespace std;
int main() {
    const int empresas = 5;
    double cotizacion[empresas];
    int cotizacionmin = 0;
    int cotizacionmax = 0;
    double sumacot = 0;
    int contador = 0;

   cout << "Ingrese el monto de la cotizacion:\n";
    for (int i = 0; i < empresas; ++i) {
        std::cout << "Cotizacion empresa " << i + 1 << ": ";
        std::cin >> cotizacion[i];
    }

    for (int i = 1; i < empresas; ++i) {
        if (cotizacion[i] > cotizacion[cotizacionmax]) {
            cotizacionmax = i;
        }
        if (cotizacion[i] < cotizacion[cotizacionmin]) {
            cotizacionmin = i;
        }
    }

 cout << "\nCotizaciones eliminadas:\n";
 cout << "La cotizacion mas alta es: " << cotizacion[cotizacionmax] << "\n";
 cout << "La cotizacion mas baja es: " << cotizacion[cotizacionmin] << "\n";

    for (int i = 0; i < empresas; ++i) {
        if (i != cotizacionmin && i != cotizacionmax) {
            sumacot += cotizacion[i];
            contador++;
        }
    }
    double promediocot = sumacot / contador;

 cout << "\nEl promedio de las cotizaciones restantes es: " << promediocot << "\n";

    return 0;
}



