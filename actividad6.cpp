#include <iostream>

using namespace std;

void eleccionUsu(int);

int main(){
    int usuario, computadora;

    cout<<"Elije una opcion:  (0) Piedra (1) Papel (2) Tijera: ";cin>>usuario;
    eleccionUsu(usuario);

    return 0;
}

void eleccionUsu(int usuario){
    
    switch (usuario){
    case 0:
        cout<<"Usuario: Piedra";
        break;
    case 1:
        cout<<"Usuario: Papel";
        break;   
    case 2:
        cout<<"Usuario: Tijera";
        break;     
    default:
        cout<<"Ingrese una opcion correcta";
        break;
    }
}
