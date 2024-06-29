#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c, d, x1,x2;
    cout<<"Ingrese el valor del coeficiente (a): ";cin>>a;
    cout<<"Ingrese el valor del coeficiente (b): ";cin>>b;
    cout<<"Ingrese el valor del coeficiente (c): ";cin>>c;

    d = pow(b,2) - 4 * a * c;

    if (d >= 0){
        x1 = (-b + sqrt(d))/ (2 * a);                 
        x2 = (-b - sqrt(d))/ (2 * a);   

        cout<<"Raiz 1"<< x1 <<endl;
        cout<<"Raiz 2"<< x2 <<endl;

    }else{
        cout<<"No tiene solucion en los reales";
    }

    return 0;
}