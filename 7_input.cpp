// cout << (operador de insercion) se usa para mostrar en pantalla
// cin >> (operador de extraccion) se usa para leer datos desde el teclado

#include <iostream>
using namespace std;

int main () {

    cout << "Ingresa tu nombre: ";
    string nombre;
    cin >> nombre; // lee el nombre ingresado por el usuario
    cout << "Hola, " << nombre << "Cuantoso anos tienes? ";

    int edad;

    cin >> edad;

    cout << "Wow, " << nombre << ", tienes " << edad << " anos! WoW" << endl;


    //cuando pones espacion en el consola cin solo toma la primera palabra antes del espacio osea Robert Pogba tomara Robert
    //si quieres tomar una linea completa con espacios usas getline
    string frase;
    cout << "Ingresa una frase completa: ";
    getline(cin >>ws, frase); // lee una linea hasta encontrar un salto de linea (\n)

    /*
    Aquí viene el detalle técnico 👇

    Cuando usas cin antes de getline, por ejemplo:

    cin >> edad;
    getline(cin, nombre);


    cin >> edad; deja el carácter de nueva línea (\n) pendiente en el buffer.
    Entonces getline() lo lee inmediatamente (piensa que “ve” un salto de línea antes de ver texto) es decir nombre queda vacío
    y parece que “se salta” la entrada.

    Para evitar eso, se usa:

    getline(cin >> ws, nombre); ws= whitespace (espacios en blanco)
    
    
    */
   
    cout << "La frase que ingresaste es: " << frase << endl;
    return 0;




}