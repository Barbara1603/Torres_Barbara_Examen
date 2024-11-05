//
// Created by barba on 05/11/2024.
//

#include "main3.h"
#include <<iostream>>

using namespace std;
void calcularPromedio() {
    double calificacion, suma = 0.0;
    const int NUM_EJERCICIOS = 8;

    for (int i = 1; i <= NUM_EJERCICIOS; ++i) {
        cout << "Introduce la calificación del ejercicio " << i << " (entre 0 y 10): ";
        cin >> calificacion;


        while (calificacion < 0 || calificacion > 10) {
            cout << "Calificación inválida. Debe estar entre 0 y 10. Intenta nuevamente: ";
            cin >> calificacion;
        }


        suma += calificacion;
    }


    double promedio = suma / NUM_EJERCICIOS;


    cout << "El promedio de las calificaciones es: " << promedio << endl;
}

int main() {

    calcularPromedio();

    return 0;
}