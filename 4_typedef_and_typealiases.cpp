#include <iostream>
using namespace std;
#include <vector>

//typedef es una forma de crear un alias para un tipo de dato existente, por ejemplo
typedef vector<pair<string, int>> Listapares_t;
//esto crea un vector cuyos elementos son pares de string e int, se suele poner al final _t para indicar que es un tipo
//listapares x = {{"Juan", 25}, {"Ana", 30}}; sera igual a vector<pair<string, int>> x = {{"Juan", 25}, {"Ana", 30}};

//typdef es antiguo ahora se usa using para crear alias de tipos
using Texto_t = string;
int main() {

    Texto_t saludo = "Hola, Mundo!";
    cout << saludo << endl; 
    Listapares_t listapares = {{"juan", 25}, {"Ana", 30}, {"Luis", 28}};

    return 0;
}