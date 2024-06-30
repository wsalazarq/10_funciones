#include <iostream>
#include <cstdlib>

using namespace std;

int eleccionUsu();
int eleccionCompu();
void mostrarEleccion(int);
void ganadorRonda(int, int, int&, int&);

int main(){
    int usuario, computadora, victoriaUsu = 0, victoriaCompu = 0;

     while (victoriaUsu < 3 && victoriaCompu < 3){

        usuario = eleccionUsu();
        cout<<"Usuario: ";
        mostrarEleccion(usuario);
        
        computadora = eleccionCompu();
        cout<<"Computadora: ";
        mostrarEleccion(computadora);
        cout<<"===================================================="<<endl;
        ganadorRonda(usuario, computadora, victoriaUsu, victoriaCompu);
    }

    if (victoriaUsu == 3){
        cout<<"Ganaste el juego"<<endl;
    }else{
        cout<<"La computadora gano el juego"<<endl;
    }    
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

void ganadorRonda(int usuario, int computadora, int& victoriaUsu, int& victoriaCompu){;
    
    if (usuario == computadora) {
        cout<<"Ronda empate"<<endl;
    }else if ((usuario == 1 && computadora == 3) ||
               (usuario == 2 && computadora == 1) ||
               (usuario == 3 && computadora == 2)) {
        cout<<"Ganaste esta ronda"<<endl;
        victoriaUsu++;
    }else {
        cout<<"La computadora gana esta ronda"<<endl;
        victoriaCompu++;
    }
    cout<<"Usuario - " <<victoriaUsu<<endl;
    cout<<"Computadora - " <<victoriaCompu<<endl;
}
