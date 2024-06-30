#include <iostream>
#include <cstdlib>

using namespace std;

int eleccionUsu();
int eleccionCompu();

int main(){
    int usuario, computadora;
    usuario = eleccionUsu();
    
    
    computadora = eleccionCompu();
    
    return 0;
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
