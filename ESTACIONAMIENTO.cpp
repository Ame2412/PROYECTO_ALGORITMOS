#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int repeticiones;
	cout<<"Cuántas veces se tiene que repetir el proceso: ";
    cin>>repeticiones;

    for (int rep = 0; rep < repeticiones; ++rep) {
        int minutos, horas;
        cout << "Ingrese la cantidad de minutos: ";
        cin >> minutos;
        cout << "Ingrese la cantidad de horas: ";
        cin >> horas;

        int costo = 0;

        if (minutos > 10) {
            minutos -= 10;
            costo += minutos > 0 ? ((minutos + 14) / 15) * 3 : 0;
        }

        costo += horas > 0 ? 10 : 0;
        costo += (horas - 1) > 0 ? (horas - 1) * 5 : 0;

        char dia;
        cout << "Ingrese el día de la semana (Domingo: D, Otro día: O): ";
        cin >> dia;

        if (toupper(dia) == 'D') {
            costo -= costo * 0.1;
        }

        cout << fixed << setprecision(2);
        cout << "El costo total es: $" << costo << endl;

        float pago;
        cout << "Ingrese el monto de pago: $";
        cin >> pago;

        float cambio = pago - costo;

        if (cambio >= 0) {
            cout << "El cambio es: $" << cambio << endl;
        } else {
            cout << "El monto pagado es insuficiente. Faltan: $" << -cambio << endl;
        }
    }

    return 0;
}

