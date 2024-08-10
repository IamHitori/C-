#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    //Edad rango 20 entre 30

    //Variables
    int edad;

    do{
        cout<<"Tu edad no deber ser menor de los 20 ni superar los 30."<<endl;
        cout<<"Ingresa tu edad: "; cin>>edad;

    }while(edad <= 20 || edad >=30);

    cout<<"Tu edad es de: "<<edad<<endl;

    system("pause");
    return 0;
}