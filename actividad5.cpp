#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a, b, c, d, x1,x2;

    cout<<"Ingrese el valor del coeficiente (a): ";cin>>a;
    cout<<"Ingrese el valor del coeficiente (b): ";cin>>b;
    cout<<"Ingrese el valor del coeficiente (c): ";cin>>c;

    if (a == 0){
        cout<<"El coeficiente a no puede ser 0";
    }else{
        d = pow(b,2) - 4 * a * c;

        if (d >= 0){
            x1 = (-b + sqrt(d))/ (2 * a);                 
            x2 = (-b - sqrt(d))/ (2 * a);   

            cout<<"x1: "<< x1 <<endl;
            cout<<"x2: "<< x2 <<endl;

        }else{
            cout<<"No tiene solucion en los reales";
        }
    }
    
    return 0;
}