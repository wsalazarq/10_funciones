#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int max, cantidad, num;
    
    cout<<"Ingrese los numeros que desea generar: ";cin>>cantidad;
    cout<<"Ingrese el numero maximo: ";cin>>max;

    for (int i = 0; i < cantidad; i++){
        num  = rand() % max;
        cout<<num<<endl;
    }

    return 0;
}