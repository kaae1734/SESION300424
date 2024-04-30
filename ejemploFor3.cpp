//Almacenar x cantidad de numero e impirmir dichos numeros

//mejorar
#include <iostream>
using namespace std;

#define MAX 100

int vector[MAX];//arreglo o vector
int pos=0;//posision o ubicacion de un elemento

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cant; //almacenar la cantidad de elementos
    int num;
    cout << "Dime cuantos numeros quieres almacenar";
    cin >> cant;

    for (int i=0;  i< cant; i++){
        cout << "Dime un #: ";
        cin >> num;
        agregar(num);
    }
    cout << "mostrar numero\n";
    mostrar();

    return 0;


}

void agregar(int num){

    vector[pos]= num;
    pos++;

}

void mostrar(){
    for (int i=0; i<0pos; i++){
        cout << vector[i] << endl;
     }
    
}