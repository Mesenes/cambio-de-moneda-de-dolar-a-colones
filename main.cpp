#include <iostream>

using namespace std;

int main() {
float dolar,cambio;

cout << "Convertir la cantidad de dólares ingresados por un usuario a colones y mostrar el resultado en pantalla \n";// descripcion de del problema.//

cout << "Escriba cantidad de dolares  \n";// Digo al usuario que hacer.
cin >> dolar; // ingreso datos a la variable dolar

cambio = dolar * 613; // ingreso datos a la variable area 
cout << "El resultado del cambio de moneda es: \n"<< cambio; // muestra el resultado del area 

return 0;
}