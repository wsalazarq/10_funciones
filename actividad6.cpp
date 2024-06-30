#include <iostream>
#include <cstdlib>

using namespace std;

int eleccionUsu();
int eleccionCompu();
void mostrarEleccion(int);

int main(){
    int usuario, computadora;
    usuario = eleccionUsu();
    cout<<"Usuario: ";
    mostrarEleccion(usuario);
    
    computadora = eleccionCompu();
    cout<<"Computadora: ";
    mostrarEleccion(computadora);
    
    return 0;
}

void mostrarEleccion(int op){
    switch (op){
        case 1:
        cout<<"Piedra"<<endl;
            break;
        case 2:
        cout<<"Papel"<<endl;
            break;   
        case 3:
        cout<<"Tijera"<<endl;
            break;     
        }
}

int eleccionUsu(){
    int usuario;
    do{
        cout<<"Elije una opcion:  (1) Piedra (2) Papel (3) Tijera: ";cin>>usuario;
    } while (usuario != 1 && usuario != 2 && usuario != 3);
    
    return usuario;
}

int eleccionCompu(){
    int num;
    num = rand() % 3 + 1;

    return num;
}
