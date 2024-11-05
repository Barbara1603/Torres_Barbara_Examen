//
// Created by barba on 05/11/2024.
//

#include "main1.h"
#include <iostream>

using namespace std;

void NUMEROentero(int numero) {
    if(numero>0) {
        cout<<"El numero es positivo." <<endl;
    }else if (numero<0) {
        cout<<"El numero es negativo" <<endl;
    }else  {
        cout<<"El numero es cero." <<endl;
    }
}


int main() {
    int numero;
    cout<<"Ingresa un numero entero:";
    cin>>numero;
  NUMEROentero(numero);

    return 0;
}