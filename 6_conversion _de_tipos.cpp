//hay veces que al hacer una operacion como  a/ int el resultado es int, pero queremos que el resultado sea float
//para eso hacemos una conversion de tipos, casteo, por ejemplo (float) a / (float) b

#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 2;  

    cout << "El resultado de a/b como int es: " << a / b << endl;
    cout << "El resultado de a/b como float es: " << (float)a / (float)b << endl;



    return 0;

}