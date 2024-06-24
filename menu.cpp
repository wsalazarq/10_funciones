#include <iostream>
using namespace std;

void depositar(float);
void retirar(float);
void mostrarSaldo();

float saldo = 0; //variable global

int main(){
    int op;
    float monto;

    cout<<" Cajero automatico "<<endl;
    cout<<" 1. Depositar "<<endl;
    cout<<" 2. Retirar "<<endl;
    cout<<" 3. Mostrar saldo "<<endl;
    cout<<" 0. Salir "<<endl;
    cout<<" Elija una opcion: ";cin>>op;
    
    switch (op){
    case 0:
        cout<<"Saliendo..."<<endl;
        system("pause");
        break;
    case 1:
        cout<<"Ingrese el monto a depositar: ";cin>>monto;
        depositar(monto);
        break;

    default:
        cout<<" Ingresa una opcion correcta "<<endl;
        system("pause");
        break;
    }

    return 0;

}

void depositar(float monto){
    saldo = saldo + monto;
    cout<<"El saldo es: "<<saldo<<endl;
}
void retirar(float monto){
    saldo = saldo - monto;
}
void mostrarSaldo(){
    cout<<"El saldo actual es: "<<saldo<<endl;
}