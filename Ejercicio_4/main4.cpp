//
// Created by barba on 05/11/2024.
//

#include "main4.h"
#include <iostream>
#include <algorithm> // Para usar std::sort
using namespace std;

void calcularTotalConPromocion() {
    double precio1, precio2, precio3;


    cout << "Introduce el precio del primer artículo: ";
    cin >> precio1;
    cout << "Introduce el precio del segundo artículo: ";
    cin >> precio2;
    cout << "Introduce el precio del tercer artículo: ";
    cin >> precio3;


    double precios[3] = {precio1, precio2, precio3};


    sort(precios, precios + 3);


    double total = precios[1] + precios[2];


    cout << "El total que debes pagar es: " << total << endl;
}

int main() {

    calcularTotalConPromocion();

    return 0;
}