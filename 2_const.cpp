#include <iostream>
using namespace std;


main (){
    
    //al poner const la variable no puede cambiar su valor, los variables en mayusculas son constantes, convencion
    const double PI =3.1416;
    double radio =10;
    double circunferencia = 2 * PI * radio;

    //PI =450.80 esto dara error porque PI es una constante 
    cout<<"El valor de la cirfunferencia para un radio de "<< radio << " es: "<<circunferencia<<" centimentors"<< endl;






    return 0;
}