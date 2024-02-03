#include <iostream>
#include <iomanip>

using namespace std;

// Función para calcular el costo de los minutos adicionales
int calcularCostoMinutos(int minutos) {
    return minutos > 10 ? ((minutos + 14) / 15) * 3 : 0;
}

// Función para calcular el costo de las horas
int calcularCostoHoras(int horas) {
    int costo = 0;
    costo += horas > 0 ? 10 : 0; // Primera hora a $10
    costo += (horas - 1) > 0 ? (horas - 1) * 5 : 0; // Horas consecuentes a $5 cada una
    return costo;
}

// Función principal
int main() {
    int repeticiones;
	cout<<"Cuántas veces se tiene que repetir el proceso: ";
    cin>>repeticiones;

    for (int rep = 0; rep < repeticiones; ++rep) {
        // Leer los minutos y las horas
        int minutos, horas;
        cout << "Ingrese la cantidad de minutos: ";
        cin >> minutos;
        cout << "Ingrese la cantidad de horas: ";
        cin >> horas;

        // Calcular el costo total
        int costo = 0;

        // Primeros 10 minutos gratis
        costo += calcularCostoMinutos(minutos);

        // Calcular el costo de las horas
        costo += calcularCostoHoras(horas);

        // Aplicar descuento si es domingo
        char dia;
        cout << "Ingrese el día de la semana (Domingo: D, Otro día: O): ";
        cin >> dia;

        if (toupper(dia) == 'D') {
            // Aplicar descuento del 10%
            costo -= costo * 0.1;
        }

        // Mostrar el costo total
        cout << fixed << setprecision(2);
        cout << "El costo total es: $" << costo << endl;

        // Calcular el cambio
        float pago;
        cout << "Ingrese el monto de pago: $";
        cin >> pago;

        float cambio = pago - costo;

        // Mostrar el cambio
        if (cambio >= 0) {
            cout << "El cambio es: $" << cambio << endl;
        } else {
            cout << "El monto pagado es insuficiente. Faltan: $" << -cambio << endl;
        }
    }

    return 0;
}

