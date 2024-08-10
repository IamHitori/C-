#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    //variables
    int numero,limite;
    
    cout<<"Ingresa limite a multiplicar: "; cin>>limite;
    cout<<"Numero a multiplicar: "; cin>>numero;

    for(int i =1;i<=limite;i++){
        cout<<numero<<" X "<<i<<" = "<<numero * i<<endl;
    }

    system("pause");
    return 0;
}