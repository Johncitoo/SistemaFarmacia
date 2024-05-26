

#include "SystemPharmacy.h"

#include <iostream>
using namespace std;

int main()
{

    cout << "hola mundo1" << endl;

    
    SystemPharmacy system;
    cout << "hola mundo2" << endl;
    

    cout << "hola mundo3" << endl;

    // Llamar a la función prueba
    int totalProductos = system.prueba();

    // Mostrar el total de productos
    cout << "Total de productos: " << totalProductos << endl;

    return 0;
}
