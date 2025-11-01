#include <iostream>
using namespace std;

//a veces queremos declar una variable multiples veces, esto se hace con la funcion namespace
namespace primero {
    int x = 5;
}

int main () {

    //int x =0;
    //si no declaro int x=0; y declaro solamente using namespace primero; entonces tomara el valor de x del namespace primero
    using namespace primero;
    cout << "El valor de x en main es: " << x << endl;

    cout << "El valor de x en el namespace primero es: " << primero::x << endl;






}