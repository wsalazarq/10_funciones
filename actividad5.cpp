#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(float, float, float, float&, float&, bool& );

int main(){
    float a,b,c,x1,x2;
    bool sonReales;

    cout<<"Ingrese el valor del coeficiente (a): ";cin>>a;
    cout<<"Ingrese el valor del coeficiente (b): ";cin>>b;
    cout<<"Ingrese el valor del coeficiente (c): ";cin>>c;
    
    if (a == 0){
        cout<<"El coeficiente (a) no puede ser 0 ";
    }else{
        calcularRaices(a, b, c, x1, x2, sonReales);
        
        if (sonReales){
            cout<<"x1: "<< x1 <<endl;
            cout<<"x2: "<< x2 <<endl;
        }else{
            cout<<"Las raices son complejas y no tiene solucion en los reales";
        }
        
    }
    
    return 0;
}

void calcularRaices(float a, float b, float c, float& x1, float& x2, bool& sonReales ){
    float d;

    d = pow(b,2) - 4 * a * c;

    if (d >= 0){
        sonReales = true;
        x1 = (-b + sqrt(d))/ (2 * a);                 
        x2 = (-b - sqrt(d))/ (2 * a);   

    }else{
        sonReales = false;
    }
     
}